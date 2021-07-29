#include "ft_includes.h"

int	ft_wordlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}

int	ft_wordcount(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (*str)
	{
		while (*str && *str == '\n')
			str++;
		j = ft_wordlen(str);
		str += j;
		if (j)
			i++;
	}
	return (i);
}

char	*ft_strdup(char *str, int j)
{
	char	*dst;
	int		i;

	dst = malloc((j + 1) * sizeof(char));
	if (!dst)
		return (0);
	i = 0;
	while (i < j && str[i])
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	**ft_split(char *str)
{
	char	**dst;
	int		size;
	int		i;
	int		j;

	size = ft_wordcount(str);
	dst = malloc((size + 1) * sizeof(char *));
	if (!dst)
		return (0);
	i = 0;
	while (i < size)
	{
		while (*str && *str == '\n')
			str++;
		j = ft_wordlen(str);
		dst[i] = ft_strdup(str, j);
		str += j;
		i++;
	}
	dst[size] = 0;
	return (dst);
}
