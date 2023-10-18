#include "libft.h"

void *ft_memmove (void *dest, void *src, size_t n)
{
    size_t i;

    i = 0;

    char *char_dest = (char *) dest;
    char *char_src = (char *) src;

    if (src < dest)
    {
        i = n;
        while (i > 0)
        {
            i--;
            char_dest[i] = char_src[i];
        }
    }
    else 
    {
        i = 0;
        while (i < n)
        {
            char_dest[i] = char_src[i];
            i++;
        }
    }
    return dest;
}