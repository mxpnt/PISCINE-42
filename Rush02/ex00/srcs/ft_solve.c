#include "ft_includes.h"

void	ft_solver(char *str)
{
	char	**index;
	char	*temp;
	int		pwr10;

	temp = ft_read();
	index = ft_split(temp);
	pwr10 = 0;
	ft_order(str, index, 0, pwr10);
	ft_free(index);
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
}
