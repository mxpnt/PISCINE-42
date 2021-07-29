/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmammeri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 13:45:45 by kmammeri          #+#    #+#             */
/*   Updated: 2021/07/10 13:45:59 by kmammeri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printrush(int x, char deb, char mil)
{
	write(1, &deb, 1);
	while (x > 2)
	{
		write(1, &mil, 1);
		x = x - 1;
	}
	if (x == 2)
		write(1, &deb, 1);
	write(1, "\n", 1);
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
		return ;
	printrush(x, 'A', 'B');
	while (y > 2)
	{
		printrush(x, 'B', ' ');
		y = y - 1;
	}
	if (y == 2)
		printrush(x, 'C', 'B');
}
