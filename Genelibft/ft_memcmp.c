/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eugeneadugyamfi <eugeneadugyamfi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:29:33 by eadu-gya          #+#    #+#             */
/*   Updated: 2023/11/19 05:45:34 by eugeneadugy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *dest, const void *src, size_t n)
{
	const unsigned char	*char_dest;
	const unsigned char	*char_src;
	size_t				i;

	i = 0;
	char_dest = (const unsigned char *) dest;
	char_src = (const unsigned char *) src;
	while (i < n)
	{
		if (char_dest[i] != char_src[i])
			return ((char_dest[i]) - (char_src[i]));
		i++;
	}
	return (0);
}
