#include "libft.h"

char	*ft_itoa(int n)
{
	int	sign;
	int	temp;
	int	i;
	int	num_digits;
	int	str_size;
	char	*str;

	sign = 1;
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	temp = n;
	num_digits = 1;
	while (temp >= 10)
	{
		temp /= 10;
		num_digits++;
	}
	int str_size = num_digits + (sign == -1) + 1;
	char *str = (char *)malloc(str_size);
	if (str)
	{
		i = 0;
		while (num_digits > 0)
			{
				str[i] = '0' + (n % 10);
				n /= 10;
				num_digits--;
				i++;
			}
	if (sign == -1)
        {
            str[i] = '-';
            i++;
        }
        str[i] = '\0';
    }
    return (str);
}

