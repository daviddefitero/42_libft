/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:38:37 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/08 16:44:23 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n-- > 1 && *(uint8_t *)s1 == *(uint8_t *)s2)
	{
		s1++;
		s2++;
	}
	return (*(uint8_t *)s1 - *(uint8_t *)s2);
}

// int	main(void)
// {
// 	const char	*a = "Hello World!";
// 	const char	*b = "Hello World!uwu";

// 	printf("%d", ft_memcmp(a, b, 12));
// }
