/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:30:24 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/16 18:42:17 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*rsltlst;
	t_list	*_rslt;

	rsltlst = NULL;
	while (lst)
	{
		_rslt = ft_lstnew(f(lst->content));
		if (!_rslt)
			ft_lstclear(&rsltlst, del);
		ft_lstadd_back(&rsltlst, _rslt);
		lst = lst->next;
	}
	return (rsltlst);
}
