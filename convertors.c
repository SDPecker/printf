#include "ft_printf.h"

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

char	*conv_from_dec_upper(unsigned int n, int sys)
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
		res[i] = num_to_ch_upper(temp % sys);
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
