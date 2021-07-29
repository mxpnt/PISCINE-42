#include "ft_includes.h"

int	ft_check_index(char *nb, char **index)
{
	int	len;
	int	i;

	i = 0;
	while (index[i])
	{
		len = ft_strlenup(index[i]);
		if (ft_strcmp(nb, index[i]) == 0)
			return (i);
		i++;
	}
	return (-1);
}

void	ft_disp(int x, char **index)
{
	int	i;

	i = 0;
	while (index[x][i])
	{
		while (index[x][i] >= '0' && index[x][i] <= '9')
			i++;
		while (index[x][i] != ':')
			i++;
		i++;
		while (index[x][i] == ' ')
			i++;
		while (index[x][i] >= 32 && index[x][i] <= 126)
		{
			write(1, &index[x][i], 1);
			i++;
		}
	}
	write(1, " ", 1);
}

void	ft_dispend(int x, char **index)
{
	int	i;

	i = 0;
	while (index[x][i])
	{
		while (index[x][i] >= '0' && index[x][i] <= '9')
			i++;
		while (index[x][i] != ':')
			i++;
		i++;
		while (index[x][i] == ' ')
			i++;
		while (index[x][i] >= 32 && index[x][i] <= 126)
		{
			write(1, &index[x][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
