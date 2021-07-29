/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 14:50:39 by mapontil          #+#    #+#             */
/*   Updated: 2021/07/27 09:41:17 by mapontil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char *s1, char *s2)
{
	char	*temp;

	temp = s1;
	s1 = s2;
	s2 = temp;
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	while (tab[i])
		i++;
	while (j < i - 1)
	{
		if (ft_strcmp(tab[j], tab[j + 1]) > 0 && tab[j + 1])
		{
			temp = tab[j];
			tab[j] = tab[j + 1];
			tab[j + 1] = temp;
			j = 0;
		}
		else
			j++;
	}
	tab[i] = 0;
}
