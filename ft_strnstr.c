/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:46:07 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/10 17:04:43 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*_little = little;
	const char	*cncdnce;

	if (!*little)
		return ((char *)big);
	while (len > 0 && *big)
	{
		_little = little;
		cncdnce = big;
		while (len > 0 && *big++ == *_little++)
		{
			if (!*_little)
				return ((char *)cncdnce);
			len--;
		}
		len--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *big = "abcdef";
	// 	char *little = "abcdefghijklmnop";
	// 	size_t max = strlen(big);

// 	printf("%s", strnstr(big, little, max));
// }
