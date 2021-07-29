#include "ft_includes.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i])
		&& (((s1[i + 1] >= '0' && s1[i + 1] <= '9')
				|| (s2[i + 1] >= '0' && s2[i + 1] <= '9'))))
		i++;
	return (s1[i] - s2[i]);
}
