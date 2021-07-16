#include "ft_printf.h"

void	ft_format_p(int *count, va_list *argc)
{
	unsigned long	point;

	point = (unsigned long)va_arg (*argc, void *);
	write (1, "0x", 2);
	(*count) += 2;
	ft_putpoint(point, count);
}
