/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pr_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genegyamfi <genegyamfi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 00:24:23 by genegyamfi        #+#    #+#             */
/*   Updated: 2024/07/20 20:16:22 by genegyamfi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_recursive(unsigned int num)
{
	int	i;

	i = 0;
	if (num == 0)
		return (i);
	i += ft_recursive (num / 10);
	ft_put_char ((num % 10) + '0');
	return (i + 1);
}

int	ft_pr_unsigned(unsigned int num)
{
	if (num == 0)
	{
		ft_put_char('0');
		return (1);
	}
	else
		return (ft_recursive(num));
}
