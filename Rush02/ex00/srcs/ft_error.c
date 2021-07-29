#include "ft_includes.h"

int	ft_check_error(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

void	ft_error(int er)
{
	if (er == 0)
		write(1, "Error\n", 6);
	if (er == 1)
		write(1, "Dict Error\n", 11);
}
