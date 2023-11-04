/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 08:36:20 by vharatyk          #+#    #+#             */
/*   Updated: 2023/11/04 14:20:19 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	f_pourcent(void)
{
	ft_char('%');
	return (1);
}

int	what_is_write(va_list args, char str )
{
	int	i;

	i = 0;
	if (str == 'i')
		i += f_putnbr(va_arg(args, int));
	else if (str == 'd')
		i += f_putnbr(va_arg(args, int));
	else if (str == 'u')
		i += f_unsigned_putnbr(va_arg(args, int));
	else if (str == 'c')
		i += ft_char(va_arg(args, int));
	else if (str == 's')
		i += f_string(va_arg(args, char *));
	else if (str == '%')
		i += f_pourcent();
	else if (str == 'x')
		i += f_hex(va_arg(args, unsigned int ));
	else if (str == 'X')
		i += f_hexx(va_arg(args, unsigned int ));
	else if (str == 'p')
		i += f_pvoid(va_arg(args, unsigned long long), "0123456789abcdef");
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		taille ;

	va_start(args, str);
	i = 0;
	taille = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			taille += what_is_write(args, str[i + 1]);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			taille++;
		}
		i++;
	}
	va_end(args);
	return (taille);
}
