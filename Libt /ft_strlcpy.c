#include "libft.h"

int ft_strlcpy (char *dest, char *src, int size)
{
    int i;

    i = 0;
    if (size == 0)
    {
        while (src[i])
        i++;
        return (i);
    }
    while (i < size - 1 && src[i] !='\0')
    {
        dest[i] = src[i];
        i++;
    }
    if (i < size)
        dest[i] = '\0';
    while(src[i] =!= '\0')
        i++;
    return (i);
}