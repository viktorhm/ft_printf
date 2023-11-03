#include"ft_printf.h"

int	ft_putnbr_fd(long int n)
{
	int i = 0 ;

		if (n < 0)
		{

			n = n * (-1);
			i += ft_char('-');
		}
		if (n >= 10)
		{
			i += ft_putnbr_fd(n / 10);
			i += ft_char(n % 10 + '0');
		}
		else
		{
			i += ft_char(n % 10 + '0');
		}

return(i);
}

int	ft_unsigned_putnbr(unsigned int n)
{
	int i = 0 ;

		if (n >= 10)
		{
			i += ft_putnbr_fd(n / 10);
			i += ft_char(n % 10 + '0');
		}
		else
		{
			i += ft_char(n % 10 + '0');
		}

return(i);
}
