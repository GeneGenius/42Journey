/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eugeneadugyamfi <eugeneadugyamfi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:17:55 by eadu-gya          #+#    #+#             */
/*   Updated: 2023/11/19 14:59:47 by eugeneadugy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// This function is to identify the first string character in a string 
char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (NULL);
}
