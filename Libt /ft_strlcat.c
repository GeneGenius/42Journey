/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eugeneadugyamfi <eugeneadugyamfi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:53:49 by eadu-gya          #+#    #+#             */
/*   Updated: 2023/10/24 10:48:37 by eugeneadugy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dest_size;

	dest_size = 0;
	while (dest[dest_size] && dest_size < n)
	{
		dest_size++;
	}
	if (dest_size == n)
	{
		while (src[dest_size - n])
			dest_size++;
	}
	else
	{
		while (src[dest_size - n] && dest_size < n - 1)
		{
			dest[dest_size] = src[dest_size - n];
			dest_size++;
		}
		dest[dest_size] = '\0';
	}
	while (src[dest_size - n])
		dest_size++;
	return (dest_size);
}