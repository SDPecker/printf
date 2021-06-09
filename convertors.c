#include "ft_printf.h"

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

char	*dec_to_hex(int n)
{
	char	*res;
	int		i;
	int		temp;
	
	i = count_digits(n, 16);
	res = (char *)malloc(i + 1);
	temp = n;
	res[i] = 0;
	while (i > 0)
	{
		
	}
	
}