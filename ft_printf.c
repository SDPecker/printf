#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		r;

	va_start(args, format);
	i = 0;
	r = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i])
			{
				r += print_variable(format[i], args);
				i++;
			}
		}
		else
			r += ft_putchar(format[i++]);
	}
	va_end(args);
	return (r);
}
