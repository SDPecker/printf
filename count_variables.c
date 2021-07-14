#include "ft_printf.h"

int	count_variables(const char *format)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i += 2;
			r++;
		}
		else
			i++;
	}
	return (r);
}