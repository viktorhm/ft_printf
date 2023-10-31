/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viktor <viktor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 04:11:59 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/30 17:25:49 by viktor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_putnbr_fd(int n)
{
	char result = 0 ;
	if (n == -2147483648)
		write(0, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(1,"-",1);
			n = n * (-1);
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10);
			result = n % 10 +'0';
			write(1, &result,1);
			result = 0 ;
		}
		else
			result = n % 10 +'0';

		write(1, &result,1);
		result = 0 ;
	}
}
