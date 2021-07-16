#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    void *t = malloc(1);
    unsigned int i = -2;
    ft_printf("test %i\n", -5);
    return(0);
    free(t);
}