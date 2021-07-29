/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 09:00:36 by mapontil          #+#    #+#             */
/*   Updated: 2021/07/08 10:54:04 by mapontil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display_nb(int nb)
{
	char	a;

	a = nb + 48;
	write(1, &a, 1);
}

void	ft_print_combn(int n)
{
	int	i;
	int	tab[10];

	if (n < 1 || n > 9)
		return ;
	i = 0;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	i = 0;
	while (tab[i] < 10 && i < n)
	{
		ft_display_nb(tab[i]);
		if (i == n - 1)
			write(1, ", ", 2);
		i++;
	}
}
