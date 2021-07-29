/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glemoine <glemoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 10:11:23 by mapontil          #+#    #+#             */
/*   Updated: 2021/07/28 13:38:49 by mapontil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <bsq.h>

int	ft_check_mapinfo(char **map, t_map_info *map_info)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(map[0]);
	i = 0;
	while (map[0][i] && (map[0][i] >= ' ' && map[0][i] <= '~'))
		i++;
	if (i != len)
		return (0);
	if (map[0][i - 1] == map[0][i - 2] || map[0][i - 1] == map[0][i - 3]
		|| map[0][i - 2] == map[0][i - 3])
		return (0);
	j = -1;
	(*map_info).size = 0;
	while (j < i - 3 && (map[0][j] >= '0' && map[0][j] <= '9'))
		(*map_info).size = (*map_info).size * 10 + map[0][j] - 48;
	if (j != i - 3)
		return (0);
	return (1);
}

int	ft_check_mapvalid(char **map, t_map_info *map_info)
{
	int	i;
	int	j;

	i = 1;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
			j++;
		if (j != (*map_info).len_col)
			return (0);
		i++;
	}
	return (1);
}
