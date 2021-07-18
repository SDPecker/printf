#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	int i1 = printf("%c\n", 0);
	int i2 = ft_printf("%c\n", 0);
	printf("%i %i\n", i1, i2);
	return (0);
}