/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 07:44:11 by mapontil          #+#    #+#             */
/*   Updated: 2021/07/28 16:38:52 by mapontil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*map;
	int	i;

	map = malloc(length * sizeof(int));
	if (!map)
		return (0);
	i = 0;
	while (i < length)
	{
		map[i] = (*f)(tab[i]);
		i++;
	}
	return (map);
}
