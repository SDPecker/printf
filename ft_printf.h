#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

char	*conv_from_dec(unsigned int n, int sys);
int		ft_printf(const char *format, ...);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int		print_integer(int value);
char	*conv_to_upper(char *line);
int		print_variable(char format, va_list args);
size_t	ft_strlen(const char *s);
int		ft_abs(int n);
int		print_unsigned(unsigned int value, int base, char c);
int		count_digits_u(unsigned int n, int sys);
int		power(int n, int p);