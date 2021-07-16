#include "ft_printf.h"

static char	lower_hex_base(unsigned int n)
{
	if (n == 10)
		return ('a');
	if (n == 11)
		return ('b');
	if (n == 12)
		return ('c');
	if (n == 13)
		return ('d');
	if (n == 14)
		return ('e');
	if (n == 15)
		return ('f');
	return (n + '0');
}

static char	upper_hex_base(unsigned int n)
{
	if (n == 10)
		return ('A');
	if (n == 11)
		return ('B');
	if (n == 12)
		return ('C');
	if (n == 13)
		return ('D');
	if (n == 14)
		return ('E');
	if (n == 15)
		return ('F');
	return (n + '0');
}

void	ft_hex_putnbr_base(unsigned int n, int *count, const char symbol)
{
	char	c;

	if (n > 15)
		ft_hex_putnbr_base(n / 16, count, symbol);
	if (symbol == 'x')
		c = lower_hex_base(n % 16);
	else
		c = upper_hex_base(n % 16);
	write(1, &c, 1);
	(*count)++;
}
