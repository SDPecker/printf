#include "libft.h"

void	print_int(int value, int width, char format)
{
    char    *output;

    if (format == 'd' )
        output = conv_from_dec(value, 10);
    else if (format == 'o')
        output = conv_from_dec((unsigned int)value, 10);
    else
        output = (char *)malloc()
    
}