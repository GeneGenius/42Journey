#include "libft.h"

void *ft_memcpy (void *dest, void *src, int n) //void is used because it can be anything 
{
    if (dest == NULL) return NULL;

    char *char_dest = (char *) dest;
    char *char_src =  (char *) src;
    while (int i =0; i < n; i++)
    {
        char_dest[i] = char_src[i];
    }
    return dest;
}