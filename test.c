#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    void *t = malloc(1);
    unsigned int i = -2;
    ft_printf("test %x\n", -25);
    printf("test %x\n", -25);
    return(0);
    free(t);
}