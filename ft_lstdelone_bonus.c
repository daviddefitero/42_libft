/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:36:43 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/18 20:52:13 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

// void	ft_test_freecnt(void *content)
// {
// 	printf("Freed: %s", (char *)content);
// }

// int	main(void)
// {
// 	t_list		*begin;
// 	t_list		*a;
// 	t_list		*b;
// 	t_list		*c;
// 	char const	*a_cnt = "1st element";
// 	char const	*b_cnt = "2nd element";
// 	char const	*c_cnt = "3rd element";

// 	begin = NULL;
// 	a = ft_lstnew((void *)a_cnt);
// 	b = ft_lstnew((void *)b_cnt);
// 	c = ft_lstnew((void *)c_cnt);
// 	ft_lstadd_front(&begin, c);
// 	ft_lstadd_front(&begin, b);
// 	ft_lstadd_front(&begin, a);
// 	ft_lstdelone(c, ft_test_freecnt);
// }
