/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glemoine <glemoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:19:24 by glemoine          #+#    #+#             */
/*   Updated: 2021/07/28 13:39:45 by mapontil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <bsq.h>

char	**ft_create_matrice(char **map, t_map_info *map_info)
{
	int		i;
	int		j;
	char	**map_num;

	i = -1;
	(*map_info).nbr_obst = 0;
	map_num = malloc((map_info->size + 1) * sizeof(char *));
	while (map[++i])
	{
		j = -1;
		map_num[i] = malloc((ft_strlen(map[i] + 1) * sizeof(char)));
		while (map[i][++j])
		{
			if (map[i][j] == map_info->empt)
				map_num[i][j] = '0';
			else if (map[i][j] == map_info->obst)
			{
				map_num[i][j] = '1';
				(*map_info).nbr_obst = (*map_info).nbr_obst + 1;
			}
		}
		map[i][j] = '\0';
	}
	map[i] = 0;
	return (map_num);
}

char	**ft_init(char *path, t_map_info *map_info, char ***map)
{
	char	*file;
	char	**map_num;
	int		i;

	file = ft_getfile(path);
	if (!file)
		return (NULL);
	(*map) = ft_split(file, "\n");
	i = 0;
	while ((*map)[i])
		i++;
	(*map_info).size == i;
	if (i <= 1)
		return (NULL);
	ft_check_map((*map), map_info);
	if (!ft_check_mapvalid((*map), map_info) \
		|| !ft_check_mapinfo((*map), map_info))
	{
		return (NULL);
	}
	map_num = ft_create_matrice((*map), map_info);
	free(file);
	return (map_num);
}

int	ft_refill(char ***map, t_square *res, t_map_info *map_info)
{
	int	i;
	int	j;

	i = 0;
	while (i < (*res).len)
	{
		j = 0;
		while (j < (*res).len)
		{
			(*map)[i + (*res).y][j + (*res).x] = (*map_info).full;
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_display(char **map, t_map_info *map_info)
{
	int	i;
	int	j;

	i = 1;
	while (map[i])
	{
		ft_putstr(map[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}


int	ft_check_map(char **map, t_map_info *map_info)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	n = 0;
	while (map[0][i] && '0' <= map[0][i] && map[0][i] <= '9')
	{
		n = n * 10 + map[0][i] - 48;
		i++;
	}
	(*map_info).size = n;
	(*map_info).empt = map[0][i];
	(*map_info).obst = map[0][++i];
	(*map_info).full = map[0][++i];
	(*map_info).len_col = ft_strlen(map[1]);
	return (0);
}

int	main(int argc, char **argv)
{
	char			**map_num;
	char			** map_sum;
	char			**map;
	t_map_info		*map_info;
	t_square		*res;
	char			*path;

	path = DEFAULT_PATH;
	if (argc == 2)
		path = argv[1];
	map_info = malloc(sizeof(t_map_info));
	map = NULL;
	res = NULL;
	map_num = ft_init(path, map_info, &map);
	if (!map_num)
	{
		ft_putstr("map error\n");
		return (0);
	}
	res = ft_resolve(map_num, &map, map_info);
	ft_refill(&map, res, map_info);
	ft_display(map, &map_info);
	return (0);
}
