/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eadu-gya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:24:38 by eadu-gya          #+#    #+#             */
/*   Updated: 2023/10/23 11:28:00 by eadu-gya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void *str, int c, size_t n)
{
	unsigned char	*buffer;
	unsigned char	value;

	buffer = (unsigned char *) str;
	value = (unsigned char) c;
	while (n > 0)
	{
		*buffer = value;
		buffer++;
		n--;
	}
	return (str);
}
