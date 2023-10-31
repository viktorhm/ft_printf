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

#include"ft_printf.h"

// static void f_erreur (void)
// {
// write(1,"erreur",6);

// }

static int f_int (int nb , int i)
{
// if (nb >= 2147483648 || nb <= -2147483648)
// 	f_erreur();

	ft_putnbr_fd (nb);
	i = i+2;
	return(i);
}

static int f_char(char c , int i)
{
	write(1,&c,1);
	i = i + 2;
	return(i);
}

static int f_dec(int c , int i)
{
	char chiffre;
	chiffre  =  c + '0';
	write(1, &chiffre ,1);
	i = i + 2;
	return(i);

}

static int f_string(int c , int i)
{



}


int ft_printf(const char *str, ...)
{

	int i;
	i = 0;

	va_list args;
	va_start(args , str );

	while(str[i] != '\0')
		{
			if(str[i] == '%')
			{
				if(str[i+1] == 'i')
					i = f_int(va_arg(args , int) , i);
				if(str[i+1] == 'd')
					i = f_dec(va_arg(args , int) , i);
				if(str[i+1] == 'c')
					i = f_char(va_arg(args , int) , i);
				if(str[i+1] == 's')
					i = f_string(va_arg(args ,const char *), i);

			}

		write(1, &str[i] ,1);
			i++;
		}


	va_end(args);
return 0 ;
}


int main (void)
{
ft_printf("testtert-%d --test %i  , %c , %s,  \n",2, 10 ,'f' , "test?");
   printf("testtert-%d --test %i  , %c , ,  \n",2147483647, 10 , 'g');

return 0 ;

}
