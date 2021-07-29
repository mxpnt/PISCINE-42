#include "ft_includes.h"

char	*ft_read(void)
{
	int		fildesc;
	char	*data;

	fildesc = open("numbers.dict.txt", O_RDONLY);
	data = malloc(2048 * sizeof(*data));
	if (!data)
		return (0);
	if (fildesc < 0)
		return (0);
	if (read(fildesc, data, 2048) < 0)
		return (0);
	close(fildesc);
	free(data);
	return (data);
}
