/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 23:14:06 by david             #+#    #+#             */
/*   Updated: 2025/09/17 21:39:08 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcpy(char *dst, const char *src, t_size size)
{
	char	*t_src;

	if (size < 1)
		return (ft_strlen(src));
	t_src = (char *)src;
	while (size-- > 0 && *t_src)
		*(dst++) = *(t_src++);
	dst = '\0';
	return (ft_strlen(src));
}
