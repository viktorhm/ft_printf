/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   idu_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:07:58 by vharatyk          #+#    #+#             */
/*   Updated: 2023/11/04 14:08:30 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	f_putnbr(long int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * (-1);
		i += ft_char('-');
	}
	if (n >= 10)
	{
		i += f_putnbr(n / 10);
		i += ft_char(n % 10 + '0');
	}
	else
	{
		i += ft_char(n % 10 + '0');
	}
	return (i);
}

int	f_unsigned_putnbr(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
	{
		i += f_putnbr(n / 10);
		i += ft_char(n % 10 + '0');
	}
	else
	{
		i += ft_char(n % 10 + '0');
	}
	return (i);
}
