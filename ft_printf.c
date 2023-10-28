/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 08:36:20 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/28 08:36:23 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

int ft_print(char *str)
{


}
/*
int ft_printf(const char *str, ...)
{
va_list args;
va_start(args, str);
int i = 0;

while( str[i] != '\0')
	{
	if(str[i]== '%')
		if(str[i+1]=='d')
			itoa(args())

		i++;
	}


va_end(args);

}

*/
//testing prinft
int main (void)
{
//ft_printf("test");
printf("test	\n 	%#o	 e");
}
