#include "ft_includes.h"

void	ft_fill(char *str, int size)
{
	int	i;

	i = 1;
	str[0] = '1';
	while (i <= size)
	{
		str[i] = '0';
		i++;
	}
	str[i] = '\0';
}

int	ft_units(char *nbr, int i, int pwr10, char **index)
{
	char	temp[1];
	char	*res;
	int		x;

	temp[0] = nbr[i];
	if (nbr[i] != '0')
	{
		x = ft_check_index(temp, index);
		ft_disp(x, index);
	}
	if (pwr10 != 0)
	{
		res = malloc(sizeof(char) * (pwr10 + 2));
		if (!res)
			return (0);
		ft_fill(res, pwr10);
		x = ft_check_index(res, index);
		ft_disp(x, index);
		free(res);
	}
	return (1);
}

void	ft_hundreds(char *nbr, int i, char **index)
{
	int		x;
	char	temp[1];

	temp[0] = nbr[i];
	x = ft_check_index(temp, index);
	ft_disp(x, index);
	x = ft_check_index("100", index);
	ft_disp(x, index);
}

void	ft_order(char *nbr, char **index, int i, int pwr10)
{
	pwr10 = ft_strlen(nbr) - 1;
	while (i < ft_strlen(nbr))
	{
		if (pwr10 % 3 == 0 && nbr[i] != '0')
			ft_units(nbr, i, pwr10, index);
		else if (nbr[i] != '0' && (pwr10 + 1) % 3 == 0)
			ft_hundreds(nbr, i, index);
		else if ((pwr10 + 2) % 3 == 0 && nbr[i] != '0')
		{
			ft_tens(nbr, i, pwr10, index);
			if (nbr[i] == '1')
			{
				i++;
				pwr10--;
			}
		}
		else if (pwr10 == 0 && nbr[i] == '0' && i == 0)
		{
			i = ft_check_index("0", index);
			ft_disp(i, index);
		}
		i++;
		pwr10--;
	}
}
