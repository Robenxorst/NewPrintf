#include "ft_printf.h"

void	ft_format_c(int *count, va_list *argc)
{
	char	c;

	c = (char)va_arg (*argc, int);
	write (1, &c, 1);
	(*count)++;
}
