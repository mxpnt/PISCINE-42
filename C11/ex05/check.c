/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 12:46:22 by mapontil          #+#    #+#             */
/*   Updated: 2021/07/22 13:39:08 by mapontil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_includes.h"

int	ft_check_dm(char o, int nb)
{
	if (o == '/' && nb == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (1);
	}
	else if (o == '%' && nb == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (1);
	}
	return (0);
}

int	ft_check_s(char *op)
{
	int	len;

	len = ft_strlen(op);
	if (len != 1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (!(*op == '+' || *op == '-' || *op == '*' || *op == '/' || *op == '%'))
	{
		write(1, "0\n", 2);
		return (0);
	}
	return (1);
}
