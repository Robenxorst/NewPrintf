#include "ft_printf.h"

void	ft_putstr(char *s, int *count)
{
	size_t	n;

	if (!s)
		s = "(null)";
	n = -1;
	while (s[++n] != '\0')
	{
		(*count)++;
		write (1, &s[n], sizeof(char));
	}
}
