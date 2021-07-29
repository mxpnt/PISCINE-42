/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 08:06:33 by mapontil          #+#    #+#             */
/*   Updated: 2021/07/29 08:38:09 by mapontil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	countpos;
	int	countneg;

	i = 0;
	countpos = 0;
	countneg = 0;
	if (length == 0)
		return (1);
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			countpos++;
		i++;
	}
	i = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1] <= 0))
			countneg++;
		i++;
	}
	if (countpos == length - 1 || countneg == length - 1)
		return (1);
	return (0);
}
