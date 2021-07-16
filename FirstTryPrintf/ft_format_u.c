#include "ft_printf.h"

void	ft_format_u(int *count, va_list *argc)
{
	unsigned int	n;

	n = (unsigned int)va_arg(*argc, unsigned int);
	ft_putnbr_u(n, count);
}
