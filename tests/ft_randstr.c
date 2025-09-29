/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_randstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 00:48:59 by david             #+#    #+#             */
/*   Updated: 2025/09/29 15:26:41 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

char	*ft_randstr(int max)
{
	int		r_nbr;
	char	*_str;
	char	*t_str;

	r_nbr = ft_randnbr(max);
	_str = malloc(r_nbr);
	t_str = _str;
	while (max-- > 2)
		*(t_str)++ = ft_randnbr(126);
	*t_str = '\0';
	return (_str);
}
