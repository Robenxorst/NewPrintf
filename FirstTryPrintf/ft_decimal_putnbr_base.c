#include "ft_printf.h"

void	ft_decimal_putnbr_base(int n, int *count)
{
	char	rez;
	char	minus;
	int		min;

	(*count)++;
	minus = '-';
	min = 1;
	if (n < 0)
		min = -1;
	if ((n > 9) || (n < -9))
		ft_decimal_putnbr_base (n / 10, count);
	rez = min * (n % 10) + 48;
	write (1, &rez, 1);
}
