#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		r;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			r += print_variable(format[i], args);
			i++;
		}
		else
		{
			ft_putchar(format[i++]);
			r++;
		}
	}
	return (r);
}
