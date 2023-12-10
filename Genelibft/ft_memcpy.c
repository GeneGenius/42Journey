/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eadu-gya <eadu-gya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:35:08 by eadu-gya          #+#    #+#             */
/*   Updated: 2023/12/09 10:21:36 by eadu-gya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*char_dest;
	char	*char_src;
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	char_dest = (char *)dest;
	char_src = (char *)src;
	while (i < n)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}
