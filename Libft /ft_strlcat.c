/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eugeneadugyamfi <eugeneadugyamfi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:53:49 by eadu-gya          #+#    #+#             */
/*   Updated: 2023/11/19 06:17:47 by eugeneadugy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dest_size;
	size_t	src_size;

	dest_size = 0;
	src_size = 0;
	while (dest_size < n && dest[dest_size] != '\0')
	{
		dest_size++;
	}
	while (src[src_size] != '\0' && (dest_size + src_size + 1) < n)
	{
		dest[dest_size + src_size] = src[src_size];
		src_size++;
	}
	if (dest_size < n)
	{
		dest[dest_size + src_size] = '\0';
	}
	return (dest_size + ft_strlen(src));
}
