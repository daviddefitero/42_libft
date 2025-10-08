/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:28:41 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/08 14:26:44 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*occrnce;

	occrnce = NULL;
	while (*s)
	{
		if (*s == c)
			occrnce = (char *)s;
		s++;
	}
	return (occrnce);
}
