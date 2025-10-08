/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:19:49 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/08 16:35:35 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (*(uint8_t *)s && n-- > 2)
	{
		if (*((uint8_t *)s) == (uint8_t)c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*a = "Hello World!";

// 	printf("%s", (char *)ft_memchr(a, 'W', 13));
// }
