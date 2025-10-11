/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 20:31:06 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/11 23:14:24 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	while (start > ft_strlen(s))
	{
		str = malloc(1 * sizeof(char));
		if (!str)
			return (NULL);
		*str = '\0';
		return (str);
	}
	s += start;
	len = ft_minsize(ft_strlen(s) + 1, len + 1);
	str = malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, len);
	return (str);
}

// int	main(void)
// {
// 	const char	a[] = "Hello World!";
// 	const char	b[] = "Hello World! how are u doing?";
// 	const char	c[] = "Hello World! how are u doing? I like flowers";

// 	printf("Str 1: %s\n ft_substr:%s\n\n",
// 		a, ft_substr(b, 1, ft_strlen(a) - 1));
// 	printf("Str 2: %s\n ft_substr:%s\n\n",
// 		a, ft_substr(b, 13, ft_strlen(b) + 35));
// 	printf("Str 3: %s\n ft_substr:%s\n\n",
// 		a, ft_substr(c, 13, ft_strlen(c) - 16));
// 	printf("Str 4: %s\n ft_substr:%s\n\n",
// 		a, ft_substr(c, 50, ft_strlen(c)));
// 	printf("Str 5: %s\n ft_substr:%s\n\n", " ", ft_substr(" ", 350053, 1));
// 	printf("Str 5: %s\n ft_substr:%s\n\n", " ",
// 		ft_substr("hola", 0, 1844674407370955161));
// }
