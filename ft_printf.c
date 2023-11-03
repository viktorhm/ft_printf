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


int f_int_unsigned(unsigned int nb)
{
int i = 0;
	i = ft_unsigned_putnbr(nb);
	return(i);

}

static int f_int (int nb)
{
	int i = 0;
	i = ft_putnbr_fd(nb);
	return(i);
}


 int ft_char(char c)
{
	write(1,&c,1);
	return(1);
}


static int f_string(char *c)
{
	int i = 0;
	int j = 0;

	while(c[j] !='\0')
	{
	write(1,&c[j],1);
	j++;
	i++;
	}

	return(i);

}

static int f_pourcent()
{
ft_char('%');
return(1);
}

int 	f_hex(unsigned int num)
{
	int i = 0;
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
		{

			i += ft_char((num - 10 + 'a'));

		}

	}
	return(i);
}

int 	f_heX(unsigned int num)
{
	int i = 0;
	if (num >= 16)
	{
		i += f_heX(num / 16);
		i += f_heX(num % 16);
	}
	else
	{
		if (num <= 9)
			i += ft_char((num + '0'));
		else
		{

			i += ft_char((num - 10 + 'A'));

		}

	}
	return(i);
}


int 	f_hex_void(unsigned long long int num , *s)
{
	int i = 0;
	if (num >= 16)
	{
		i += f_hex(num / 16);
		i += f_hex(num % 16);
	}
	else
	{


	}
	return(i);
}
int w0x ()
{
write(1 ,"0x" ,2);
return(2);
}

int  f_Pvoid(unsigned long long  num)
{
	int	i;

	i = 0;
	i += w0x();
	if (num == 0)
	{
		i += write(1, "(nil)", 5);
		return (5);
	}
	else
		i += f_hex_void(num);
	return(i);
}


int what_is_write(va_list args  ,char str )
{
	int i = 0 ;
	if(str == 'i')
		i += f_int(va_arg(args , int));
	else if(str == 'd')
		i += f_int(va_arg(args , int));
	else if(str == 'u')
		i += f_int_unsigned(va_arg(args , int));
	else if(str == 'c')
		i += ft_char(va_arg(args , int));
	else if(str == 's')
		i += f_string(va_arg(args ,char *));
	else if(str == '%')
		i += f_pourcent();
	else if(str == 'x')
		i += f_hex(va_arg(args , int ));
	else if(str == 'X')
		i += f_heX(va_arg(args , int ));
	else if(str == 'p')
		i += f_Pvoid(va_arg(args , int ));

	return(i);
}



int ft_printf(const char *str, ...)
{

	int i;

	while(str[i])
		{
			if(str[i] == '%')
			{
				 taille += what_is_write( args , str[i+1]);
				 i++;
			}
			else
			{
			write(1, &str[i] ,1);
			taille++;
			}
			i++;
		}
	va_end(args);

return (taille) ;
}


// int main (void)
// {

//  	int a = 10;
//  	int *b = &a;

//  	unsigned int i = 4294967295 ;


// 	printf("%d\n", ft_printf("%p \n", b ));
// 	printf("%d",   printf("%p \n", b  ));

//  return 0 ;

// }
