#include "ft_includes.h"

void	ft_tens(char *nbr, int i, int pwr10, char **index)
{
	if (nbr[i] == '1')
		ft_case1(nbr, i, pwr10, index);
	else if (nbr[i] != '0')
		ft_case2(nbr, i, index);
}

int	ft_case1(char *nbr, int i, int pwr10, char **index)
{
	char	*res;
	char	diz[2];
	int		x;

	diz[0] = nbr[i];
	diz[1] = nbr[i + 1];
	x = ft_check_index(diz, index);
	ft_disp(x, index);
	if (pwr10 - 1 != 0)
	{
		res = malloc(sizeof(char) * (pwr10 + 2));
		if (!res)
			return (0);
		ft_fill(res, pwr10 - 1);
		x = ft_check_index(res, index);
		ft_disp(x, index);
		free(res);
	}
	return (1);
}

void	ft_case2(char *nbr, int i, char **index)
{
	char	diz[2];
	int		x;

	diz[0] = nbr[i];
	diz[1] = '0';
	x = ft_check_index(diz, index);
	ft_disp(x, index);
}
