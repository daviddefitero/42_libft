/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 17:09:27 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/03 19:46:07 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	void	*t_s;

	t_s = s;
	while (n-- > 0)
		*((uint8_t *)t_s++) = c;
	return (s);
}

int	main(void)
{
	char	*a;
	int		*b;

	a = malloc(1000 * sizeof(char));
	b = malloc(20 * sizeof(int));
	ft_memset(a, 'J', 1000);
	ft_memset(b, 3, 20);
	printf("String A(char): %s", a);
	printf("String B(int): %d", b);
	return (0);
}
