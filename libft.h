/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 21:28:04 by david             #+#    #+#             */
/*   Updated: 2025/10/11 23:03:47 by dde-fite         ###   ########.fr       */
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
char	*ft_strdup(const char *s);

/* ******* ADDITIONAL FUNCTIONS ******* */

// ft_substr
char	*ft_substr(char const *s, unsigned int start, size_t len);

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
void	ft_putnbr_fd(int n, int fd);

/* *********** MY FUNCTIONS *********** */

// ft_minnbr
// TODO Hacer que acepte infinitos argumentos
int		ft_minnbr(int n1, int n2);

// ft_maxnbr
// TODO Hacer que acepte infinitos argumentos
int		ft_maxnbr(int n1, int n2);

// ft_minsize
// TODO Hacer que acepte infinitos argumentos
size_t	ft_minsize(size_t n1, size_t n2);

// ft_maxsize
// TODO Hacer que acepte infinitos argumentos
size_t	ft_maxsize(size_t n1, size_t n2);

#endif