#include "ft_printf.h"

void	ft_putnbr_u(unsigned int n, int *count)
{
	char	c;

	if (n > 9)
		ft_putnbr_u(n / 10, count);
	c = n % 10 + '0';
	write(1, &c, 1);
	(*count)++;
}
