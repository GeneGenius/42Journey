/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genegyamfi <genegyamfi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 22:58:48 by genegyamfi        #+#    #+#             */
/*   Updated: 2024/07/08 21:38:54 by genegyamfi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *str, int character)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	if (character == '\0')
		return ((char *)&str[ft_strlen(str)]);
	while (str[i] != '\0')
	{
		if (str[i] == (char)character)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	i = -1;
	j = 0;
	if (s1)
		while (s1[++i] != '\0')
			str[i] = s1[i];
	while (s2[j] != '\0')
		str[i++] = s2[j++];
	str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (str);
}

char	*ft_line(char *str)
{
	int	i;
	char	*tab;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		tab = (char *)malloc(sizeof(char) * (ft_strlen(str) - i +1));
		if (!tab)
			return (NULL);
		i++;
		j = 0;
		while (str[i])
			tab[j++] = str[i++];
		tab[j] = '\0';
	free(str);
	return (tab);
	}

char	*new_str(char *str)
{
	int	i;
	int	j;
	char	*tab;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	tab = (char *)malloc(sizeof(char) * (ft_strlen(str) - i + 1));
	if (!tab)
		return (NULL);
	i++;
	j = 0;
	while (str[i])
		tab[j++] = str[i++];
	tab[j] = '\0';
	free(str);
	return (tab);
}
