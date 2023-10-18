#include "libft.h"

void *ft_memcpy (void *dest, void *src, size_t n) //void is used because it can be anything 
{
    if (dest == NULL)
    { 
        return (NULL);
    }

    char *char_dest = (char *) dest;
    char *char_src =  (char *) src;
    size_t  i;
    i = 0;
    while (i < n)
    {
        char_dest[i] = char_src[i];
        i++;
    }
    return dest;
}