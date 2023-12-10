/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eugeneadugyamfi <eugeneadugyamfi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:36:46 by eadu-gya          #+#    #+#             */
/*   Updated: 2023/11/19 14:52:30 by eugeneadugy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	num_size(long num)
{
	unsigned int	length;

	length = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		length += 1;
	}
	while (num != 0)
	{
		num /= 10;
		length ++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char				*str;
	unsigned int		num;
	unsigned int		length;

	length = num_size(n);
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);
	num = (unsigned int)n;
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	if (num == 0)
		str[length - 1] = '0';
	str[length] = '\0';
	while (num != 0)
	{
		str[length - 1] = (num % 10) + '0';
		num = num / 10;
		length--;
	}
	return (str);
}
