#include "ft_printf.h"

void	ft_check_symbol(int	*count, const char *format, va_list *argc)
{
	if (*format == 'c')
		ft_format_c(count, argc);
	if (*format == 's')
		ft_format_s(count, argc);
	if (*format == 'd' || *format == 'i')
		ft_format_d_i(count, argc);
	if (*format == 'x' || *format == 'X')
		ft_format_x_X(count, argc, format);
	if (*format == 'p')
		ft_format_p(count, argc);
	if (*format == 'u')
		ft_format_u(count, argc);
	if (*format == '%')
	{
		write (1, "%", 1);
		(*count)++;
	}
}

int	ft_read_form(const char *format, va_list *argc)
{
	int		i;
	int		count;

	i = -1;
	count = 0;
	while (format[++i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			ft_check_symbol(&count, (format + i), argc);
			i++;
		}
		if (format[i] == '%' && format[i + 1] == '\0')
			return (count);
		else
		{
			count++;
			write(1, &format[i], sizeof(char));
		}
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		result;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	result = ft_read_form(format, &args);
	va_end(args);
	return (result);
}
