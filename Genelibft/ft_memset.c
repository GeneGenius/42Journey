/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eadu-gya <eadu-gya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:24:38 by eadu-gya          #+#    #+#             */
/*   Updated: 2023/11/04 22:22:23 by eadu-gya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*buffer;

	buffer = (unsigned char *) str;
	while (n > 0)
	{
		*buffer = (unsigned char)c;
		buffer++;
		n--;
	}
	return (str);
}
