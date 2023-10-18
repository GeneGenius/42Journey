#include "libft.h"

// This function is to identify the first string character in a string 
char *ft_strchr(const char *str, int c)
{
    while (*str != '\0')
    {
        if (*str == c) 
            return (char *) str;
        str++;
    }
    return (NULL);
}