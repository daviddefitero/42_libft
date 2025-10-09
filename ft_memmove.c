/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:11:00 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/09 19:17:30 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if (dest > src)
		while (n-- > 0)
			((uint8_t *)dest)[n] = ((uint8_t *)src)[n];
	else
		ft_memcpy(dest, src, n);
	return (dest);
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
// 	ft_memmove(second + 8, NULL, 10);
// 	printf("memmove overlap : %s\n ", second);
// 	return (0);
// }
