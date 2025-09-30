/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 23:49:23 by david             #+#    #+#             */
/*   Updated: 2025/09/30 16:02:39 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*t_src;
	size_t		dst_len;

	if (size < 1 || dst[size - 1])
		return (size);
	t_src = (char *)src;
	dst_len = ft_strlen(dst);
	while (size-- > 1 && *dst)
		dst++;
	while (size-- > 1 && *t_src)
		*(dst++) = *(t_src++);
	dst = "\0";
	return (dst_len + ft_strlen(src));
}
