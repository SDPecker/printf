#include "ft_printf.h"

int	count_digits(long int n, int sys)
{
	int	r;

	r = 1;
	while (ft_abs(n) / power(sys, r) != 0)
		r++;
	if (n < 0)
		r++;
	return (r);
}

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

int	count_digits_lu(long unsigned int n, int sys)
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
