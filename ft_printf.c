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

#include"printf.h"

static void ft_word(char *src)
{
	int i = 0 ;
	while(src[i] != '\0')
	{
		write(1,&src[i],1);
	}
}

int ft_printf(const char *str, ...)
{
	int i; int  j ;
	i  = 0; j = 0;
	va_list args;
	va_start(args , str );

	while(str[i] != '\0')
		{
		if(str[i]== '%' && str[i+1]=='d' || str[i+1]=='i')
			ft_putnbr_fd((va_arg(args , int)));
		write(1, &str[i] ,1);
			i++;
		}


	va_end(args);
return 0 ;
}

int main (void)
{
ft_printf("test %d  test %i ",6 , 10);

return 0 ;

}
