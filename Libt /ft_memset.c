#include "libft.h"

void ft_memset (void *str, int c, size_t n)
{
    unsigned char   *buffer;
    unsigned char   value;

    buffer = (unsigned char *) str;
    value = (unsigned char) c;
    
    while (n > 0)
    {
        *buffer = value;
        buffer++;
        n--;
    }
        return str;
}