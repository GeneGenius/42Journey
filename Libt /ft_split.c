#include "libft.h"

static int  charcount(char  const *str, char c)
{
    int     i;
    int     count;

    i = 0;
    count = 0;
    while (str[i])
    {
        while (str[i] == c)
            i++;
        if (str[i]  != c &&  str[i] != '\0')
            count++;
            while (str[i] != c && str[i] != '\0')
                i++;
    }
    return (count);

}

static int  charlen(char const *str, char c)
{
    int i;
    int  count;

    i = 0;
    count = 0;

    while (str[i]  == c)
        i++;
    while (str[i] !=c && str[i] != '\0')
        {
            count++;
            i++;
        }
        return (count);
}

char    **ft_split (char const *s, char c)
{
    char    **str;
    int     i;
    int     j;
    int     pos;

    if (s == NULL)
    {
        return (NULL);
    }
    i  = 0;
    pos = 0;
    j  = charcount((char *)s, c);
    str = (char **)malloc (sizeof(char *)s), c, &pos);
    if (str[i]  == NULL)
    {
        
    }  

}
