#include "libft.h"

char *ft_strlcat(char *dest, char *src, unsigned int n)
{
    int i;
    unsigned int dest_size;

    dest_size = 0;
    i = 0;

    while (dest[dest_size])
    {
        dest_size++;
        while (src[i] && (dest_size < (n-1)))
        {
            dest[dest_size] = src[i];
            dest_size++;
            i++;
        }
        dest[dest_size] = '\0';
        return (dest_size);
    }
}