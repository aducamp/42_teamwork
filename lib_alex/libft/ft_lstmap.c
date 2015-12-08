/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducamp <aducamp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:53:01 by aducamp           #+#    #+#             */
/*   Updated: 2015/01/11 18:32:31 by aducamp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*ret;
	t_list		*check;

	if (!lst || !f)
		return (NULL);
	ret = NULL;
	while (lst)
	{
		if (!(check = f(lst)))
			return (NULL);
		ft_lstaddback(&ret, check);
		lst = lst->next;
	}
	return (ret);
}
