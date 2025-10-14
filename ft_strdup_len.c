/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 14:54:04 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/14 10:19:20 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup_len(const char *s, size_t len)
{
	char			*str;

	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, len + 1);
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	a[] = "Lorem ipsum dolor sit amet, non enim anim nostrud velit mollit elit sit magna sit ut non dolore non eiusmod in aute officia sed deserunt";
// 	char	*b;

// 	b = ft_strdup_len(a, 10);
// 	printf("%s", b);
// }
