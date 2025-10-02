/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:28:41 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/02 16:32:13 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*t_s;
	char	*occrnce;

	t_s = (char *)s;
	occrnce = NULL;
	while (*t_s)
	{
		if (*t_s == c)
			occrnce = t_s;
		t_s++;
	}
	return (occrnce);
}
