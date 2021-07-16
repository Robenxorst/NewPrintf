#include "ft_printf.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_recursive_itoa(long int n, char *nb, int index)
{
	long int	x;

	if (n < 0)
	{
		x = -n;
		nb[0] = '-';
	}
	else
		x = n;
	if (x >= 10)
	{
		ft_recursive_itoa(x / 10, nb, index - 1);
		ft_recursive_itoa(x % 10, nb, index);
	}
	if (x < 10)
	{
		x += 48;
		nb[index] = x;
	}
}

char	*ft_itoa(int n)
{
	char		*point;
	long int	x;
	int			len;

	x = n;
	len = 0;
	while (x != 0)
	{
		x /= 10;
		len++;
	}
	if (n < 0)
		len++;
	if (n == 0)
		len = 1;
	point = malloc((len + 1) * sizeof(char));
	if (point == NULL)
		return (NULL);
	point[len] = '\0';
	ft_recursive_itoa(n, point, len - 1);
	return (point);
}
