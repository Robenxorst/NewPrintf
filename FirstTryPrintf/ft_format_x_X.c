#include "ft_printf.h"

void	ft_format_x_X(int *count, va_list *argc, const char *format)
{
	unsigned int	n;

	n = (unsigned int)va_arg (*argc, unsigned int);
	ft_hex_putnbr_base(n, count, *format);
}
