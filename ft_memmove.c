/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:11:00 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/08 16:15:55 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const void	*_dest = dest;

	if (dest > src)
		while (n-- > 0 && *(uint8_t *)src)
			((uint8_t *)dest)[n] = ((uint8_t *)src)[n];
	else
		while (n-- > 0 && *(uint8_t *)src)
			*((uint8_t *)dest++) = *((uint8_t *)src++);
	return ((void *)_dest);
}

// int	main(void)
// {
// 	char	str[100] = "Learningisfun";
// 	char	first[100];
// 	char	second[100];

// 	strcpy(first, str);
// 	strcpy(second, str);
// 	printf("first string :%s\n ", str);
// 	printf("second string :%s\n ", str);
// 	memcpy(first + 8, first, 10);
// 	printf("memcpy overlap : %s\n ", first);
// 	ft_memmove(second + 8, second, 10);
// 	printf("memmove overlap : %s\n ", second);
// 	return (0);
// }
