#include "ft_printf.h"
int	ft_putchar(char c)
{
	write(1, &c, 1);
    return (1);
}

int	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
    return (i);
}

int     print_integer(int value, int base)
{
    char    *output;
    int     r;

    output = conv_from_dec(value, base);
    ft_putstr(output);
    r = ft_strlen(output);
    free(output);
    return (r);
}

int     print_variable(char format, va_list args)
{
    int r;

    r = 0;
    if (format == '%')
		r += ft_putchar('%');
	else if (format == 'c')
		r += ft_putchar(va_arg(args, char));
	else if (format == 's')
		r += ft_putstr(va_arg(args, char*));
	else if (format == 'p')
		r += print_integer((int)va_arg(args, void*), 16);
	else if (format == 'i' || format == 'd')
		r += print_integer(va_arg(args, int), 10);
	else if (format == 'u')
		r += print_integer((int)va_arg(args, unsigned int), 10);
	else if (format == 'x')
		r += print_integer(va_arg(args, int), 16);
	else if (format == 'X')
		r += ft_putstr(conv_to_upper(conv_from_dec(va_arg(args, int), 16)));
    return (r);
}