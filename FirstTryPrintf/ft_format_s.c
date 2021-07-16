#include "ft_printf.h"

void	ft_format_s(int *count, va_list *argc)
{
	char	*s;

	s = (char *)va_arg (*argc, char *);
	ft_putstr (s, count);
}
