/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eugeneadugyamfi <eugeneadugyamfi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:05:04 by eugeneadugy       #+#    #+#             */
/*   Updated: 2023/10/26 08:05:05 by eugeneadugy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdlib.h>

// Declarations go here
int	ft_atoi(const char *str)
void	ft_bzero(void *ptr, size_t len)
void	*ft_calloc(size_t count, size_t size)
int	ft_isalnum(int c)
int	ft_isalpha(int c)
int	ft_isascii(int c)
int	ft_digit(int c)
int	ft_isprint(int c)
void	*ft_memchr(const void str, int c, size_t n)
void	ft_memcmp(void *dest, void *src, size_t n)
void	*ft_memcpy(void *dest, void *src, size_t n)
void	*ft_memmove(void *dest, void *src, size_t n)
void	ft_memset(void *str, int c, size_t n)
char	*ft_strchr(const char *str, int c)
char	*ft_strdup(const char *src)
size_t	ft_strlcat(char *dest, const char *src, size_t n)
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
int	ft_strlen (const char *str)
int	ft_strncm(const char *s1, const char *s2, unsigned int n)
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
char	*ft_strrchr(const char *str, int c)
int 	ft_tolower(int c)
int	ft_toupper(int c)
char	*ft_substr(char const *s, unsigned int start, size_t n)
char	*ft_strtrim(char const *s1, char const *set)
char	*ft_strjoin(char const *s1, char const *s2)





#endif

