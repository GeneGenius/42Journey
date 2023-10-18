#include "libft.h"

// This function is to identify the first string character in a string 
char *ft_strrchr(const char *str, int c)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    while (i >= 0)
    {
        if (str[i] == (char)c)
            return ((char *)(str + i));
        i--;
    }
        return (NUll);
}