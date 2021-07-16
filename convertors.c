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

int	count_digits(long long int n, int sys)
{
	int	r;

	r = 1;
	while (ft_abs(n) / power(sys, r) != 0)
		r++;
	if (n < 0)
		r++;
	return (r);
}

char	num_to_ch(int n)
{
	if (n >= 0 && n <= 15)
		return ("0123456789abcdef"[n]);
	return ('!');
}

char	*conv_from_dec(unsigned int n, int sys)
{
	char	*res;
	int		i;
	int		temp;

	i = count_digits(n, sys);
	res = (char *)malloc(i + 1);
	temp = n;
	res[i] = 0;
	while (--i >= 0)
	{
		res[i] = num_to_ch(temp % sys);
		temp /= sys;
	}
	return (res);
}
