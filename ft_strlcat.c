/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 23:49:23 by david             #+#    #+#             */
/*   Updated: 2025/09/29 12:46:30 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcat(char *dst, const char *src, t_size size)
{
	char		*t_src;
	t_size		dst_len;

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
