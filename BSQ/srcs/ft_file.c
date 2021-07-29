/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glemoine <glemoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 14:24:51 by aavril            #+#    #+#             */
/*   Updated: 2021/07/28 13:38:46 by mapontil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <bsq.h>

char	*ft_getfile(char *path)
{
	int					file;
	unsigned long		i;
	char				buf[1000];
	char				*dest;
	unsigned long		sd;

	sd = 1;
	buf[999] = '\0';
	file = open(path, O_RDONLY);
	if (file == -1)
		return (0);
	i = 0;
	while (sd > 0)
	{
		sd = read(file, buf, 1000);
		if (sd > 0)
			i += sd;
	}
	dest = malloc((i + 1) * sizeof(char));
	if (!dest)
		return (0);
	close(file);
	file = open(path, O_RDONLY);
	if (file == -1)
		return (dest);
	read(file, dest, i);
	dest[i] = '\0';
	close(file);
	return (dest);
}
