/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eugeneadugyamfi <eugeneadugyamfi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:20:33 by eadu-gya          #+#    #+#             */
/*   Updated: 2023/11/19 14:53:56 by eugeneadugy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_char(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			++i;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (i);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	i = 0;
	str = malloc(sizeof(char *) * (get_char(s, c) + 1));
	if (!str)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			j = 0;
			while (*s && *s != c && ++j)
				++s;
			str[i++] = ft_substr(s - j, 0, j);
		}
		else
			++s;
	}
	str[i] = 0;
	return (str);
}
