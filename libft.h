/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 21:28:04 by david             #+#    #+#             */
/*   Updated: 2025/09/15 21:35:47 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef __SIZE_TYPE__	t_size;

/* ********** Libc FUNCTIONS ********** */

/* ------ No external functions ------- */
// • memset
// • bzero
// • memcpy
// • memccpy
// • memmove
// • memchr
// • memcmp

// • strlen
t_size	ft_strlen(const char *s);

// • strlcpy
t_size	ft_strlcpy(char *dst, const char *src, t_size size);

// • strlcat
t_size	ft_strlcat(char *dst, const char *src, t_size size);

// • strchr
char	*ft_strchr(const char *s, int c);

// • strrchr
// • strnstr

// • strncmp
int		ft_strncmp(const char *s1, const char *s2, t_size n);

// atoi - IN PROGRESS
int		ft_atoi(const char *nptr);

// • isalpha
// • isdigit
// • isalnum
// • isascii
// • isprint
// • toupper
// • tolower

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
