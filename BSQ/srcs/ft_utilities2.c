/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glemoine <glemoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 11:18:40 by glemoine          #+#    #+#             */
/*   Updated: 2021/07/28 13:39:34 by mapontil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <bsq.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	*ft_strcat(char *dest, char *src, int *position)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[*position + i] = src[i];
		i++;
	}
	*position += i;
	return (0);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		lenght;
	int		i;
	int		position;
	int		lenght_sep;

	lenght_sep = ft_strlen(sep);
	lenght = 0;
	i = -1;
	while (++i < size)
		lenght += ft_strlen(strs[i]) + lenght_sep;
	result = (char *)malloc((lenght + lenght_sep) * sizeof(char));
	if (!result)
		return (0);
	i = 0;
	position = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i], &position);
		if (i + 1 < size)
			ft_strcat(result, sep, &position);
		i++;
	}
	result[position] = '\0';
	return (result);
}
