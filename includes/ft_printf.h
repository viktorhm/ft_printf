/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:10:03 by vharatyk          #+#    #+#             */
/*   Updated: 2023/11/04 14:37:35 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_char(char c);
int		f_string(char *c);
int		f_putnbr(long int c );
int		ft_char(char c);
int		f_unsigned_putnbr(unsigned int n);
int		f_hex_void(unsigned long long int num, char *src );
int		f_pvoid(unsigned long long num, char *src);
int		f_hex(unsigned int num);
int		f_hexx(unsigned int num);
int		ft_char(char c);
int		f_string(char *c);

#endif
