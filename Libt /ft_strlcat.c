#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t n)
{
    size_t i;
    size_t dest_size;

    dest_size = 0;
    i = 0;
    while (dest[dest_size] && dest_size < n)
    {
        dest_size++;
    }
    if (dest_size == n)
    {
        while (src[i])
        {
            i++;
        }
        return dest_size + i;
    }
    
   
     while (src[i] && (dest_size < (n-1)))
    {
        dest[dest_size] = src[i];
        dest_size++;
        i++;
    }
    dest[dest_size] = '\0';

    while (src[i])
    {
        i++;
    }
    return (dest_size + i);
}