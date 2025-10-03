/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 17:09:27 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/03 19:33:55 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*t_dest;

	t_dest = dest;
	while (n-- > 0)
		*((uint8_t *)src++) = *((uint8_t *)t_dest++);
	return (dest);
}

// int main(void)
// {
// 	int		nums[10];
// 	char	ltr[] = "abcdefghijk";
// 	int		i;

// 	i = 0;
// 	while (i < 10)
// 	{
// 		nums[i] = i;
// 		i++;
// 	}
// 	i = 0;
// 	while (i < 10)
// 		printf("%d", nums[i++]);
// 	printf("\n");
// 	printf("%s", ltr);
// 	printf("\n");
// 	ft_memset(nums, 7, sizeof(int) * 3);
// 	ft_memset(ltr, '&', 5);
// 	i = 0;
// 	while (i < 10)
// 		printf("%d", nums[i++]);
// 	printf("\n");
// 	printf("%s", ltr);
// 	printf("\n");
// 	return (0);
// }
