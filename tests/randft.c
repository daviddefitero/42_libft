/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randft.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:09:52 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/06 19:14:16 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	ft_randnbr(int max)
{
	return (rand() % (max + 1));
}

char	ft_randchar(void)
{
	return (ft_randnbr(126));
}

char	*ft_randstr(int max)
{
	int		r_nbr;
	char	*_str;
	char	*t_str;

	r_nbr = ft_randnbr(max);
	_str = malloc(r_nbr);
	t_str = _str;
	while (r_nbr-- > 2)
		*(t_str)++ = ft_randchar();
	*t_str = '\0';
	return (_str);
}
