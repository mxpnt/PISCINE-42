/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 18:04:40 by mapontil          #+#    #+#             */
/*   Updated: 2021/07/10 10:41:42 by mapontil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowc(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else
			i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	str = ft_lowc(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			&& (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
			&& (!(str[i - 1] >= '0' && str[i - 1] <= '9')))
			str[i] -= 32;
		i++;
	}
	return (str);
}
