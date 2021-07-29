/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 16:44:38 by mapontil          #+#    #+#             */
/*   Updated: 2021/07/07 16:53:35 by mapontil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z')
			|| (*str >= 'A' && *str <= 'Z'))
			str++;
		else
			return (0);
	}
	return (1);
}