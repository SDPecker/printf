#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;

	while (format[i])
	{
		if (format[i] == '%')
		{
			
		}
		else
			write(1, &format[i++], 1);
	}
	
}