#include "ft_printf.h"

int	ft_format_p(va_list *ap)
{
	unsigned long		n;
	char				base[50];
	int					i;
	unsigned long		buf;
	int					count;

	i = 0;
	count = 0;
	n = (unsigned long)va_arg(*ap, void *);
	count += (int)write(1, "0x", 2);
	if (n == 0)
		count += (int)(write(1, "0", 1));
	while (n)
	{
		buf = n % 16;
		if (buf < 10)
			base[i++] = (char)(buf + 48);
		else
			base[i++] = (char)(buf + 87);
		n = n / 16;
	}
	while (i-- > 0)
		count += (int)write(1, &base[i], 1);
	return (count);
}

int	ft_format_hex(va_list *ap, char x)
{
	unsigned int		n;
	char				base[50];
	int					i;
	unsigned int		buf;
	int					count;

	count = 0;
	n = va_arg(*ap, unsigned int);
	i = 0;
	if (n == 0)
		count += (int)write(1, "0", 1);
	while (n)
	{
		buf = n % 16;
		if (buf < 10)
			base[i++] = (char)(buf + 48);
		else if (x == 'X')
			base[i++] = (char)(buf + 55);
		else
			base[i++] = (char)(buf + 87);
		n = n / 16;
	}
	while (i-- > 0)
		count += (int)write(1, &base[i], 1);
	return (count);
}

int	ft_format_u(va_list *arg)
{
	unsigned int	u;
	unsigned long	buf;
	char			base[50];
	int				i;
	int				count;

	count = 0;
	u = va_arg(*arg, unsigned int);
	i = 0;
	if (u == 0)
		count += (int)write(1, "0", 1);
	while (u != 0)
	{
		buf = u % 10;
		if (buf < 10)
			base[i++] = (char)(buf + 48);
		u = u / 10;
	}
	while (i-- > 0)
		count += (int)write(1, &base[i], 1);
	return (count);
}
