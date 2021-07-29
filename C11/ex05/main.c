/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 12:36:04 by mapontil          #+#    #+#             */
/*   Updated: 2021/07/22 13:35:21 by mapontil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_includes.h"

int	main(int argc, char **argv)
{
	long int	res;

	if (argc == 4)
	{
		if (ft_check_s(argv[2]) == 1)
		{
			if (ft_check_dm(*argv[2], ft_atoi(argv[3])) == 1)
				return (0);
			else
			{
				res = ft_doop(ft_atoi(argv[1]), *argv[2], ft_atoi(argv[3]));
				ft_putnbr(res);
				write(1, "\n", 1);
			}
		}
	}
	return (0);
}
