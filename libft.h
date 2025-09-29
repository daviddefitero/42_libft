/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 21:28:04 by david             #+#    #+#             */
/*   Updated: 2025/09/29 15:16:20 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef __SIZE_TYPE__	t_size;

/* ********** Libc FUNCTIONS ********** */

/* ------ No external functions ------- */
// • isalpha
int		ft_isalpha(int c);
// • isdigit
// • isalnum
// • isascii
// • isprint

// • strlen
t_size	ft_strlen(const char *s);

// • memset
// • bzero
// • memcpy
// • memmove

// • strlcpy
t_size	ft_strlcpy(char *dst, const char *src, t_size size);

// • strlcat
t_size	ft_strlcat(char *dst, const char *src, t_size size);

// • toupper
// • tolower

// • strchr
char	*ft_strchr(const char *s, int c);

// • strrchr

// • strncmp
int		ft_strncmp(const char *s1, const char *s2, t_size n);

// • memchr
// • memcmp
// • strnstr

// • atoi
int		ft_atoi(const char *nptr);

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
