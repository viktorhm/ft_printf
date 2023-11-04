/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_file.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:52:02 by vharatyk          #+#    #+#             */
/*   Updated: 2023/11/04 14:02:20 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	f_hex_void(unsigned long long int num, char *src )
{
	int	i;

	i = 0;
	if (num >= 16)
	{
		i += f_hex_void(num / 16, src);
		i += f_hex_void(num % 16, src);
	}
	else
		i += ft_char(src[num % 16]);
	return (i);
}

int	f_pvoid(unsigned long long num, char *src )
{
	int	i;

	i = 0;
	if (num > 0)
		i += f_string("0x");
	if (num == 0)
	{
		i += write(1, "(nil)", 5);
		return (5);
	}
	i += f_hex_void(num, src);
	return (i);
}
