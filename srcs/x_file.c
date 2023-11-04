/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_file.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:53:36 by vharatyk          #+#    #+#             */
/*   Updated: 2023/11/04 14:06:06 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	f_hex(unsigned int num)
{
	int	i;

	i = 0;
	if (num >= 16)
	{
		i += f_hex(num / 16);
		i += f_hex(num % 16);
	}
	else
	{
		if (num <= 9)
			i += ft_char((num + '0'));
		else
			i += ft_char((num - 10 + 'a'));
	}
	return (i);
}

int	f_hexx(unsigned int num)
{
	int	i;

	i = 0;
	if (num >= 16)
	{
		i += f_hexx(num / 16);
		i += f_hexx(num % 16);
	}
	else
	{
		if (num <= 9)
			i += ft_char((num + '0'));
		else
			i += ft_char((num - 10 + 'A'));
	}
	return (i);
}
