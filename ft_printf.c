/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viktor <viktor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 08:36:20 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/30 18:43:52 by viktor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

static int f_int (int nb , int *i)
{
if (nb >= 2147483648 || nb >= -2147483647)
	return(1);
	ft_putnbr_fd (nb);
			*i = *i+2;
}



int ft_printf(const char *str, ...)
{
	int j;
	int *i;
	j = 0;
	*i = &j;
	va_list args;
	va_start(args , str );

	while(str[*i] != '\0')
		{
		if(str[*i]== '%' && str[*i+1]=='d' || str[*i+1]=='i')
			f_int(va_arg(args , int) , i );


		write(1, &str[*i] ,1);
			i++;
		}


	va_end(args);
return 0 ;
}


int main (void)
{
ft_printf("testtert-%d --test %i ",2147483648, 10);
printf("testtert-%d --test %i ",-2147483647, 10);

return 0 ;

}
