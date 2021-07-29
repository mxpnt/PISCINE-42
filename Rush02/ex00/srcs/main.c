#include "ft_includes.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_check_error(argv[1]) == 0)
		{
			ft_error(0);
			return (0);
		}
		else
			ft_solver(argv[1]);
	}
	else if (argc == 3)
	{
		if (ft_check_error(argv[2]) == 0)
		{
			ft_error(0);
			return (0);
		}
	}
	return (0);
}
