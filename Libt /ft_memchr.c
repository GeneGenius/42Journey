/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eadu-gya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:22:34 by eadu-gya          #+#    #+#             */
/*   Updated: 2023/10/23 09:28:38 by eadu-gya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void str, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (i < n)
	{
		if (*(unsigned char *)(str + i) == (unsigned char) c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
