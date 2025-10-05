/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 23:49:23 by david             #+#    #+#             */
/*   Updated: 2025/10/05 15:11:56 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// TODO Revisar errores en algunos casos
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*t_src;
	size_t		dst_len;

	if (size < 1)
		return (size);
	t_src = (char *)src;
	dst_len = ft_strlen(dst);
	while (size-- > 1 && *dst)
		dst++;
	ft_strlcpy(dst, t_src, size);
	return (dst_len + ft_strlen(src));
}
