#ifndef PRINTF_H
# define PRINTF_H


#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int ft_printf(const char *str, ...);
int	ft_putnbr_fd(long int c );
int ft_char(char c);
int	ft_unsigned_putnbr(unsigned int n);

#endif
