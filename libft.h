/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 21:28:04 by david             #+#    #+#             */
/*   Updated: 2025/10/02 17:09:21 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

/* ********** Libc FUNCTIONS ********** */

/* ------ No external functions ------- */
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
void	*memset(void *s, int c, size_t n);

// • bzero
// • memcpy
// • memmove

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
// • memcmp
// • strnstr

// • atoi
int		ft_atoi(const char *nptr); // UNFINIShED

/* --------- “malloc” allowed --------- */
// • calloc
// • strdup

/* ******* ADDITIONAL FUNCTIONS ******* */

// itoa - IN PROGRESS
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
