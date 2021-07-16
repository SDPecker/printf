#include "ft_printf.h"
int	count_digits_u(unsigned int n, int sys)
{
	int	r;

	r = 1;
	while (n / sys != 0)
	{ 
		r++;
		n = n / sys;
	}
	return (r);
}