#include "ft_printf.h"



int     print_integer(int value)
{
	int		r;
	int		t;
	char	*output;
	r = 0;
	t = value;
	if (value < 0)
	{
		r++;
		t *= -1;
		ft_putchar('-');
	}
	output = conv_from_dec(t, 10);
	ft_putstr(output);
    r += ft_strlen(output);
    free(output);
    return (r);
}

int		print_unsigned(unsigned int value, int base)
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
		r += ft_putchar(va_arg(args, int));
	else if (format == 's')
		r += ft_putstr(va_arg(args, char*));
	else if (format == 'p')
		r += print_unsigned(va_arg(args, unsigned int), 16);
	else if (format == 'i' || format == 'd')
		r += print_integer(va_arg(args, int));
	else if (format == 'u')
		r += print_unsigned(va_arg(args, unsigned int), 10);
	else if (format == 'x')
		r += print_unsigned(va_arg(args, int), 16);
	else if (format == 'X')
		r += ft_putstr(conv_to_upper(conv_from_dec(va_arg(args, unsigned int), 16)));
    return (r);
}