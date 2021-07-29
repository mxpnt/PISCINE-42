/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 08:10:53 by mapontil          #+#    #+#             */
/*   Updated: 2021/07/12 17:15:34 by mapontil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

void	ft_printhex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;
	unsigned char	c;

	i = 0;
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			write(1, "\\", 1);
			c = *str;
			ft_printhex(c);
		}
		else
			write(1, str, 1);
		str++;
	}
}
