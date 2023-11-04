/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_file.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:05:35 by vharatyk          #+#    #+#             */
/*   Updated: 2023/11/04 14:01:16 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	f_string(char *c)
{
	int	i;
	int	j ;

	i = 0;
	if (c == 0)
	{
		i += f_string("(null)");
		return (i);
	}
	j = 0 ;
	while (c[j] != '\0')
	{
		write(1, &c[j], 1);
		j++;
		i++;
	}
	return (i);
}
