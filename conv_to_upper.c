#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*conv_to_upper(char *line)
{
	char	*res;
	int		i;

	i = 0;
	res = (char *)malloc(ft_strlen(line) + 1);
	while (line[i])
	{
		if (line[i] >= 'a' && line[i] <= 'z')
			res[i] = line[i] - 32;
		else
			res[i] = line[i];
		i++;
	}
	res[i] = 0;
	return (res);
}