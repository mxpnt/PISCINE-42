/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:50:20 by mapontil          #+#    #+#             */
/*   Updated: 2021/07/13 18:56:42 by mapontil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_check(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (str[i] == to_find[i])
	{
		i++;
		if (to_find[i] == '\0')
			return (1);
	}	
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			if (ft_check(str, to_find) == 1)
				return (str);
		}
		str++;
	}
	return (0);
}

int	main(void)
{
	printf("%s", ft_strstr("Bonjour", "jouro"));
}
