#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

char	*conv_from_dec(int n, int sys);
int		ft_printf(const char *format, ...);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int		print_integer(int value, int base);
char	*conv_to_upper(char *line);
int		print_variable(char format, va_list args);
size_t	ft_strlen(const char *s);