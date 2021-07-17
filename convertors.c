#include "ft_printf.h"

char	num_to_ch(int n)
{
	if (n >= 0 && n <= 15)
		return ("0123456789abcdef"[n]);
	return ('!');
}

char	*conv_from_dec(unsigned int n, int sys)
{
	char			*res;
	int				i;
	unsigned int	temp;

	i = count_digits_u(n, sys);
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

char	*conv_from_dec_long(long unsigned int n, int sys)
{
	char				*res;
	int					i;
	long unsigned int	temp;

	i = count_digits_lu(n, sys);
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
