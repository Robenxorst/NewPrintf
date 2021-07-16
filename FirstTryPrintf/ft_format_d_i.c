#include "ft_printf.h"

void	ft_format_d_i(int *count, va_list *argc)
{
	int		n;
	char	c;

	n = (int)va_arg (*argc, int);
	if (n < 0)
	{
		c = '-';
		write (1, &c, 1);
		(*count)++;
	}
	ft_decimal_putnbr_base(n, count);
}
