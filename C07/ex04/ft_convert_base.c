/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:08:25 by mapontil          #+#    #+#             */
/*   Updated: 2021/07/21 16:40:45 by mapontil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_check_base(char *base);
int	ft_cbase(char c, char *base);
int	ft_pbase(char c, char *base);
int	ft_atoi_base(char *nbr, char *base, int len);

char	*ft_putnbr_base(char *dst, char *base, long int res, int j)
{
	dst[j] = '\0';
	if (res < 0)
		res *= -1;
	while (j--)
	{
		dst[j] = base[res % ft_strlen(base)];
		res /= ft_strlen(base);
	}
	return (dst);
}

void	ft_lenb(long int nbr, int *j, int len)
{
	if (nbr < 0)
		nbr = -nbr;
	if (nbr >= len)
	{
		*j += 1;
		ft_lenb(nbr / len, j, len);
	}
	else
		*j += 1;
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char		*dst;
	long int	res;
	int			lenfrom;
	int			lento;
	int			j;

	if (ft_check_base(base_from) == 1 && ft_check_base(base_to) == 1)
	{
		lenfrom = ft_strlen(base_from);
		lento = ft_strlen(base_to);
		res = (long int)ft_atoi_base(nbr, base_from, lenfrom);
		j = 0;
		ft_lenb(res, &j, lento);
		if (res < 0)
			j++;
		dst = malloc(j * sizeof(char));
		if (!dst)
			return (0);
		ft_putnbr_base(dst, base_to, res, j);
		if (res < 0)
			dst[0] = '-';
		return (dst);
	}
	return (0);
}
