/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 23:49:23 by david             #+#    #+#             */
/*   Updated: 2025/10/06 20:12:52 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <bsd/string.h>
// TODO Revisar errores en algunos casos
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*t_src;
	size_t		dst_len;

	if (size < 1)
		return (size);
	dst_len = ft_strlen(dst);
	if (dst_len >= size)
		return (ft_strlen(src) + dst_len);
	t_src = (char *)src;
	while (*dst)
		dst++;
	ft_strlcpy(dst, t_src, size);
	return (dst_len + ft_strlen(src));
}

// int	main(void)
// {
// 	char	*a = "";
// 	char	*b = "Hola buenas";
// 	char	*exptd[20];
// 	char	*rstl[20];

// 	ft_strlcpy(exptd, a, 0);
// 	ft_strlcpy(rstl, a, 0);
// 	strlcat(exptd, b, 12);
// 	ft_strlcat(rstl, b, 12);
// 	printf("%s", exptd);
// 	printf("%s", rstl);
// }
