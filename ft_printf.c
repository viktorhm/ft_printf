/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viktor <viktor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 08:36:20 by vharatyk          #+#    #+#             */
/*   Updated: 2023/11/01 16:44:15 by viktor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

// static void f_erreur (void)
// {
// write(1,"erreur",6);

// }

// int f_adress( char src , int i)
// {
// char test = &src ;
// printf("%d",test);
// return(i)

// }
int f_int_unsigned(unsigned nb , int i)
{
{
	char result = 0 ;



		if (nb >= 10)
		{
			f_int_unsigned(nb / 10 , i++);
			result = nb % 10 +'0';
			write(1, &result,1);

			result = 0 ;
		}
		else
			result = nb % 10 +'0';
			write(1, &result,1);
		result = 0 ;

		return(i);

}

return 0 ;

}

static int f_int (int nb , int i)
{
// if (nb >= 2147483648 || nb <= -2147483648)
// 	f_erreur();

	ft_putnbr_fd (nb);
	i ++;
	return(i);
}

static int f_char(char c , int i)
{
	write(1,&c,1);
	i ++;
	return(i);
}

static int f_dec(int c , int i)
{
	char chiffre;
	chiffre  =  c + '0';
	write(1, &chiffre ,1);
	i ++;
	return(i);

}

static int f_string(char *c , int i)
{
	int j = 0;

	while(c[j] !='\0')
	{
	write(1,&c[j],1);
	j++;
	}
	i++;
	return(i);

}



int what_is_write(va_list args ,int  i  ,char str )
{
	if(str == 'i')
		i = f_int(va_arg(args , int) , i);
	if(str == 'd')
		i = f_int(va_arg(args , int) , i);
	if(str == 'u')
		i = f_int_unsigned(va_arg(args , int) , i);
	if(str == 'c')
		i = f_char(va_arg(args , int) , i);
	if(str == 's')
		i = f_string(va_arg(args ,char *), i);
	if(str == '%')
		i++;
	// if(str == 'p')
	// 	i = f_adress(va_arg(args ,char *), i);
	else
	i++;
	return(i);
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
				 i = what_is_write( args , i  , str[i+1]);
			}

		write(1, &str[i] ,1);
			i++;
		}
	va_end(args);
return (i) ;
}


int main (void)
{

	int a = 10;
	int *b = &a;

	unsigned int i = 4294967295 ;


printf("---------%ls----------", b[2]);


ft_printf("d -> %d -- i-> %i -- u-> %u -- c-> %c -- s-> %s -- w-> %% -- p->  /END \n",200, 1000 , i  ,'f' , "test?");

   printf("d -> %d -- i-> %i -- u-> %u -- c-> %c -- s-> %s -- w-> %% -- p-> %p/END \n",200, 1000 , i  ,'f' , "test?" , b );

return 0 ;

}
