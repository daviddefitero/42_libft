/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:28:41 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/01 17:58:11 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
// EN PROGRESO
char	*ft_strrchr(const char *s, int c)
{
	char	*t_s;

	t_s = s;
	while (*t_s)
	{
		if (*t_s == c)
			return (t_s);
		t_s++;
	}
	return (NULL);
}
