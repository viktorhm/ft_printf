#ifndef printf_H
# define printf_H


#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int 	ft_printf(const char *str, ...);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);

#endif
