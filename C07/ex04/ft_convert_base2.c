/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:08:53 by mapontil          #+#    #+#             */
/*   Updated: 2021/07/21 11:52:08 by mapontil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(base);
	if (len == 0 || len == 1)
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		i++;
	}
	return (1);
}

int	ft_cbase(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	if (base[i] == c)
		return (1);
	return (0);
}

int	ft_pbase(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != c)
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	res;
	int				neg;
	int				len;

	len = ft_strlen(base);
	res = 0;
	neg = 1;
	if (ft_check_base(base) == 1)
	{
		while (*str == 32 || (*str >= 9 && *str <= 13))
			str++;
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
				neg *= -1;
			str++;
		}
		while (ft_cbase(*str, base) == 1 && *str)
		{
			res = res * len + (ft_pbase(*str, base));
			str++;
		}
		return (res * neg);
	}
	return (0);
}
