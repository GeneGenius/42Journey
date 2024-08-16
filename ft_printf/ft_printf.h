/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genegyamfi <genegyamfi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:39:25 by genegyamfi        #+#    #+#             */
/*   Updated: 2024/07/20 20:13:20 by genegyamfi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int	ft_pr_string(char *str);
int	ft_putnbr(int nb);
int	ft_printhex(int num);
int	ft_put_char(int c);
int	ft_pr_unsigned(unsigned int num);
int	ft_pointer(unsigned long num);
int	ft_printf(const char *str, ...);
#endif