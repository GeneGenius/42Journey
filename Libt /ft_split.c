/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eugeneadugyamfi <eugeneadugyamfi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:20:33 by eadu-gya          #+#    #+#             */
/*   Updated: 2023/10/24 11:59:59 by eugeneadugy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	charcount(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			count++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);
}

static int	charlen(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != c && str[i] != '\0')
	{
		count++;
        i++;
	}
    return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		pos;

	if (!s || !(str = (char **)malloc(sizeof(*str) * (charcount(s, c) + 1))))
		return (0);
	i = -1;
	j = 0;
	while (++i < charcount(s, c))
	{
		pos = 0;
		if (!(str[i] = ft_strnew(charcount(&s[j], c) + 1)))
			str[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			str[i][pos++] = s[j++];
		str[i][pos] = '\0';
	}
	str[i] = 0;
	return (str);
}