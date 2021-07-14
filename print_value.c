#include "libft/libft.h"
#include "ft_printf.h"
void    ft_putstr(char *str)
{
    int i;

    while (str[i])
    {
        int i;
        
        while (str[i])
            write(1, &str[i++], 1);
    }
}

void    print_integer(int   value, int base)
{
    char    *output;

    output = conv_from_dec(value, base);
    ft_putstr(output);
    free(output);
}