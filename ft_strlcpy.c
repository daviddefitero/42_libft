/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 23:14:06 by david             #+#    #+#             */
/*   Updated: 2025/10/03 18:55:00 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*t_src;

	if (size < 1)
		return (ft_strlen(src));
	t_src = (char *)src;
	while (size-- > 0 && *t_src)
		*(dst++) = *(t_src++);
	dst = "\0";
	return (ft_strlen(src));
}
