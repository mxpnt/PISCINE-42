/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 15:16:06 by mapontil          #+#    #+#             */
/*   Updated: 2021/07/27 09:47:33 by mapontil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
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
		if (cmp(tab[j], tab[j + 1]) > 0 && tab[j + 1])
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
