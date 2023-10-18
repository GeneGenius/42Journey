#include "libft"

void ft_memcpy (void  *dest, void *src, int n)
{
    char *char_dest;
    char *char_src;
    int i;

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