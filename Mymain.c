#include "ft_printf.h"

int main()
{
	int		l;
	char	*p = NULL;
	int		m = -20;

	l = ft_printf("cspdiuxX%");
	printf("hello|\n");
	printf("%d\n", l);
	printf("\n");
	l = printf("cspdiuxX%");
	printf("hello|\n");
	printf("%d\n", l);
	return 0;
}
