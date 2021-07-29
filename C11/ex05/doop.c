/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 14:17:55 by mapontil          #+#    #+#             */
/*   Updated: 2021/07/28 18:29:10 by mapontil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_includes.h"

long int	ft_doop(int nb1, char op, int nb2)
{
	long int	res;

	res = 0;
	if (op == '+')
		res = nb1 + nb2;
	else if (op == '-')
		res = nb1 - nb2;
	else if (op == '*')
		res = nb1 * nb2;
	else if (op == '/')
		res = nb1 / nb2;
	else if (op == '%')
		res = nb1 % nb2;
	return (res);
}
