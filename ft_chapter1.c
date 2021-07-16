#include "ft_printf.h"

int	ft_format_c(va_list *arg)
{
	char	c;

	c = va_arg(*arg, int);
	write(1, &c, 1);
	return (1);
}

int	ft_format_s(va_list *arg)
{
	char	*str;
	int		len;

	str = va_arg(*arg, char *);
	if (!str)
		return ((int)write(1, "(null)", 6));
	len = ft_strlen(str);
	write(1, str, len);
	return (len);
}

int	ft_format_d(va_list *arg)
{
	int		d;
	char	*point;

	d = va_arg(*arg, int);
	point = ft_itoa(d);
	d = ft_strlen(point);
	write(1, point, d);
	free (point);
	return (d);
}
