#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char	*str, ...);
int		ft_read_type(char str, va_list *ap);
int		ft_format_c(va_list *ap);
int		ft_format_s(va_list *ap);
int		ft_format_p(va_list *ap);
int		ft_format_hex(va_list *ap, char x);
int		ft_format_u(va_list *ap);
int		ft_format_d(va_list *ap);
int		ft_strlen(const char *str);
char	*ft_itoa(int n);
void	ft_recursive_itoa(long int n, char *nb, int index);

#endif
