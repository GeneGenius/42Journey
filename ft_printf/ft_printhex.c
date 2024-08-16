/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genegyamfi <genegyamfi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 00:24:14 by genegyamfi        #+#    #+#             */
/*   Updated: 2024/07/20 21:51:18 by genegyamfi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	write_char(char c)
{
	write(1, &c, 1);
}

void	hex(int num)
{
	int		remainder;
	char	digit;

	if (num == 0)
		return ;
	remainder = num % 16;
	hex(num / 16);
	if (remainder < 10)
		digit = remainder + '0';
	else
		digit = remainder - 10 + 'A';
	write_char(digit);
}

int	ft_printhex(int num)
{
	if (num == 0)
		write_char('0');
	else
		hex(num);
	write_char('\n');
	return (num);
}
