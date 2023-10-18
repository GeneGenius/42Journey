#include "libft.h"

void ft_memset (void *str, int c int n)
{
    unsgined char   *buffer;

    buffer = NULL;
    buffer = (unsigned char *) str;
    while (n--)
        buffer[n] = (unsigned char) c;
    return ((void *) str);
}