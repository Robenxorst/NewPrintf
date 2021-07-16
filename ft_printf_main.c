#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	int ft;
	int st;
	int d = -2147483648;
	char c = 'H';;
	signed int i = -57;
	char *s = "";
	unsigned int u = 4294967295;
	unsigned long long int x = 4310122033;
	char	*p = NULL;
	printf("\n|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	st = printf ("\nstandart:\nSerezha% Molodec!%%\t\nint |%d|\nchar |%c|\nsigned |%i|\nstring |%s|\nunsigned int |%u|\nsmall hex |%x|\nbig hex |%X|\npointer |%p|\n", d, c, i, s, u, x, x, p);
	ft = ft_printf ("\nmy_funct:\nSerezha% Molodec!%%\t\nint |%d|\nchar |%c|\nsigned |%i|\nstring |%s|\nunsigned int |%u|\nsmall hex |%x|\nbig hex |%X|\npointer |%p|\n", d, c, i, s, u, x, x, p);
	printf ("\nft = %d  st = %d\n", ft, st);


	char *s1 = "hello c";
	char z = 'a';
	int dd = -2147483648;
	unsigned int ii = 789567;
	unsigned int uns = 4562505501;
	unsigned int unss = 4242;
	char *p_c = "i hate c";
	char *p_null = NULL;
	int a;
	int b;
	a = printf("ORIGINAL: he %c %s %d %i %u %%%%%%% %x %X hello\n", z, s1, dd, ii, uns, s1, &dd);
	b = ft_printf("MY      : he %c %s %d %i %u %%%%%%% %x %X hello\n", z, s1, dd, ii, uns, s1, &dd);
	printf("orlen: %d\nmylen: %d\n\n", a, b);
}
