#include "ft_printf.h"

int	power(int n, int p)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	while (i++ < p)
	{
		r *= n;
	}
	return (r);
}

int	ft_abs(int n)
{
	if (n < 0)
		return (-1 * n);
	return (n);
}
