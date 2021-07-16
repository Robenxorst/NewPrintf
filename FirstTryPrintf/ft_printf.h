#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putstr(char *s, int *count);
void	ft_putpoint(unsigned long n, int *count);
void	ft_hex_putnbr_base(unsigned int n, int *count, char symbol);
void	ft_decimal_putnbr_base(int n, int *count);
void	ft_putnbr_u(unsigned int n, int *count);
void	ft_format_c(int *count, va_list *argc);
void	ft_format_d_i(int *count, va_list *argc);
void	ft_format_p(int *count, va_list *argc);
void	ft_format_s(int *count, va_list *argc);
void	ft_format_u(int *count, va_list *argc);
void	ft_format_x_X(int *count, va_list *argc, const char *format);
int		ft_read_form(const char *format, va_list *argc);
void	ft_check_symbol(int	*count, const char *format, va_list *argc);
int		ft_printf(const char *format, ...);

#endif
