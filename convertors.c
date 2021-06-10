//#include "ft_printf.h"
#include <stdlib.h>
#include <stdio.h>

int		power(int n, int p)
{
	int	i;
	int r;

	i = 0;
	r = 1;
	while(i < n)
	{
		r *= n;
		i++;
	}
	return (r);
}

int		count_digits(int n, int sys)
{
	int r;
	r = 1;
	while (n / power(sys, r) > 0)
		r++;
	return (r);
}

char	num_to_ch(int n)
{
	if (n >= 0 && n <= 15)
		return ("0123456789abcdef"[n]);
	return ('!');
}

char	*conv_from_dec(int n, int sys)
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

int main(void)
{
	printf("%c\n", num_to_ch(110));
	return (0);
}