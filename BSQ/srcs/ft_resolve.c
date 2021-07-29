/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glemoine <glemoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 15:29:57 by glemoine          #+#    #+#             */
/*   Updated: 2021/07/28 13:39:16 by mapontil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <bsq.h>

int	ft_check_line(t_map_info *map_info, char **map_num, int x, int y)
{
	int	i;

	i = x;
	while (y < (*map_info).size && map_num[y][i] == '0')
		i++;
	return (i - x);
}

int	ft_check_nline(char **map_num, int x, int y, int n)
{
	int	i;

	i = x;
	while (map_num[y] && map_num[y][i] == '0' && i - x < n)
		i++;
	return (i - x);
}

int	ft_check_col(t_map_info *map_info, char **map_num, int x, int y)
{
	int	i;

	i = y;
	while (i < (*map_info).size && map_num[i][x] == '0')
		i++;
	return (i - y);
}

int	ft_check_square(char **map_num, int x, int y, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (ft_check_nline(map_num, x, y + i, len) < len)
			return (0);
		i++;
	}
	return (1);
}

t_square	*ft_resolve(char **map_num, char ***map, t_map_info *info)
{
	t_square	*res;
	int			x;
	int			y;
	int			len;
	int			len_min;

	y = 1;
	res = malloc(sizeof(t_square));
	len_min = -1;
	if (!res)
		return (NULL);
	while (y <= (*info).size)
	{
		x = 0;
		while (map_num[y][x])
		{
			if (map_num[y][x] == '0')
			{
				len = ft_min(ft_check_line(info, map_num, x, y), \
					 ft_check_col(info, map_num, x, y));
				while (len >= 0 && (len > len_min))
				{
					if (ft_check_square(map_num, x, y, len) && (len > len_min))
					{
						len_min = len;
						(*res).x = x;
						(*res).y = y;
						if (len == 0)
							len++;
						(*res).len = len;
						len = 0;
					}
					len--;
				}
			}
			x++;
		}
		y++;
	}
	return (res);
}
