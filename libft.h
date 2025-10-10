/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 21:28:04 by david             #+#    #+#             */
/*   Updated: 2025/10/10 17:55:53 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <stdint.h>
# include <limits.h>

/* ********** Libc FUNCTIONS ********** */

/* --- No external functions allwd ---- */
// • isalpha
int		ft_isalpha(int c); // TEST INCLUDED

// • isdigit
int		ft_isdigit(int c); // TEST INCLUDED

// • isalnum
int		ft_isalnum(int c); // TEST INCLUDED

// • isascii
int		ft_isascii(int c); // TEST INCLUDED

// • isprint
int		ft_isprint(int c); // TEST INCLUDED

// • strlen
size_t	ft_strlen(const char *s); // TEST INCLUDED

// • memset
void	*ft_memset(void *s, int c, size_t n);

// • bzero
void	ft_bzero(void *s, size_t n);

// • memcpy
void	*ft_memcpy(void *dest, const void *src, size_t n);

// • memmove
void	*ft_memmove(void *dest, const void *src, size_t n);

// • strlcpy
size_t	ft_strlcpy(char *dst, const char *src, size_t size); // TEST INCLUDED

// • strlcat
size_t	ft_strlcat(char *dst, const char *src, size_t size); // TEST INCLUDED

// • toupper
int		ft_toupper(int c); // TEST INCLUDED

// • tolower
int		ft_tolower(int c); // TEST INCLUDED

// • strchr
char	*ft_strchr(const char *s, int c); // TEST INCLUDED

// • strrchr
char	*ft_strrchr(const char *s, int c); // TEST INCLUDED

// • strncmp
int		ft_strncmp(const char *s1, const char *s2, size_t n); // TEST INCLUDED

// • memchr
void	*ft_memchr(const void *s, int c, size_t n);

// • memcmp
int		ft_memcmp(const void *s1, const void *s2, size_t n);

// • strnstr
char	*ft_strnstr(const char *big, const char *little, size_t len);

// • atoi
int		ft_atoi(const char *nptr);

/* --------- “malloc” allowed --------- */
// • calloc
void	*ft_calloc(size_t nmemb, size_t size);

// • strdup

/* ******* ADDITIONAL FUNCTIONS ******* */

// ft_substr

// ft_strjoin

// ft_strtrim

// ft_split

// ft_itoa - UNFINISHED
char	*ft_itoa(int n);

// ft_strmapi

// ft_striteri

// ft_putchar_fd - REVISAR
void	ft_putchar_fd(char c, int fd);

// ft_putstr_fd - REVISAR
void	ft_putstr_fd(char *s, int fd);

// ft_putendl_fd - REVISAR
void	ft_putendl_fd(char *s, int fd);

// ft_putnbr_fd - UNFINISHED
//void	ft_putnbr_fd(int n, int fd);

#endif