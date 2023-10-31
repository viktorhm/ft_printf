#ifndef PRINTF_H
# define PRINTF_H


#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int 	ft_printf(const char *str, ...);
void	ft_putnbr_fd(int c);

#endif
