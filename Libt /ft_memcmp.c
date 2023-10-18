#include "libft"

void ft_memcmp (void  *dest, void *src, size_t n)
{
    char *char_dest;
    char *char_src;
    size_t i;

    i = 0;
    char_dest = (char *) dest;
    char_src = (char *) src;
    while (i < n)
    {
        if (char_dest[i] != char_src[i])
            return (((char) char_dest[i]) - ((char) char_src[i]))
            i++;
    }
    return (0);
}