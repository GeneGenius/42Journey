#include "libft.h"

int ft_atoi (const char *str)
{
    int i;
    int negative;
    int result;

    i = 0;
    negative = 1;
    result = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            negative *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = (str[i] - '0') + (res * 10);
        i++;
    }
    return (result * negative);
}