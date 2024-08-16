/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genegyamfi <genegyamfi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 00:21:23 by genegyamfi        #+#    #+#             */
/*   Updated: 2024/07/21 09:59:05 by genegyamfi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list arg, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_put_char(va_arg(arg, int));
	else if (format == 'p')
		len += ft_pointer(va_arg(arg, unsigned long));
	else if (format == 's')
		len += ft_pr_string(va_arg(arg, char *));
	else if (format == 'd' || format == 'i')
		len += ft_putnbr(va_arg(arg, int));
	else if (format == 'u')
		len += ft_pr_unsigned(va_arg(arg, unsigned int));
	else if (format == 'x' || format == 'X')
		len += ft_printhex(va_arg(arg, unsigned int));
	else if (format == '%')
		len += ft_put_char('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	arg;
	int		print_len;

	i = 0;
	print_len = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_len += ft_format(arg, str[i + 1]);
			i++;
		}
		else
			print_len += ft_put_char(str[i]);
		i++;
	}
	va_end(arg);
	return (print_len);
}
