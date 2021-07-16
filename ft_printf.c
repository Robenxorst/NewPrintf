#include "ft_printf.h"

int	ft_read_type(char str, va_list *arg)
{
	int	count;

	count = 0;
	if (str == 'c')
		count += ft_format_c(arg);
	if (str == 's')
		count += ft_format_s(arg);
	if (str == 'p')
		count += ft_format_p(arg);
	if (str == 'd' || str == 'i')
		count += ft_format_d(arg);
	if (str == 'u')
		count += ft_format_u(arg);
	if (str == 'x' || str == 'X')
		count += ft_format_hex(arg, str);
	if (str == '%')
		count += (int)write(1, "%", 1);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int			count;
	va_list		arg;

	count = 0;
	va_start(arg, str);
	while (*str)
	{
		if (*str != '%')
			count += (int)write(1, str, 1);
		else
		{
			str++;
			count += ft_read_type(*str, &arg);
		}
		str++;
	}
	va_end(arg);
	return (count);
}
