/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genegyamfi <genegyamfi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 00:24:33 by genegyamfi        #+#    #+#             */
/*   Updated: 2024/07/17 22:17:59 by genegyamfi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_point(unsigned long num)
{
	const char	*s;
	int			i;

	i = 0;
	s = "0123456789abcdef";
	if (num >= 16)
	{
		i += ft_pointer (num / 16);
		i += ft_pointer (num % 16);
	}
	else
		i += write (1, &s[num], 1);
	return (i);
}

int	ft_pointer(unsigned long num)
{
	int	i;

	i = 0;
	if (!num)
		i += write(1, "(nil)", 5);
	else
	{
		i += write(1, "0x", 2);
		i += ft_pointer (num);
	}
	return (i);
}
