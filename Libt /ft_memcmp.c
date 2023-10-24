/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eadu-gya <eadu-gya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:29:33 by eadu-gya          #+#    #+#             */
/*   Updated: 2023/10/23 10:02:49 by eadu-gya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memcmp(void *dest, void *src, size_t n)
{
	char	*char_dest;
	char	*char_src;
	size_t	i;

	i = 0;
	char_dest = (char *) dest;
	char_src = (char *) src;
	while (i < n)
	{
		if (char_dest[i] != char_src[i])
			return (((char) char_dest[i]) - ((char) char_src[i]));
		i++;
	}
	return (0);
}
