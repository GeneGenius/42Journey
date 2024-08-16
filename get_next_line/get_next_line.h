/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genegyamfi <genegyamfi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 21:41:07 by genegyamfi        #+#    #+#             */
/*   Updated: 2024/07/20 23:09:51 by genegyamfi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#define BUFFER_SIZE 1
# endif

size_t	ft_strlen(char *s);
char	*ft_strchr(char *str, int character);
char	*ft_strjoin(char *s1, char *s2);
char	*read_ln(int fd, char *str);
char	*get_next_line(int fd);
char	*ft_line(char *str);
char	*new_str(char *str);
#endif
