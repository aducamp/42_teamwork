/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducamp <aducamp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:52:42 by aducamp           #+#    #+#             */
/*   Updated: 2015/01/11 18:30:26 by aducamp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*drive;

	if (!alst || !*alst || !del)
		return ;
	drive = *alst;
	while (drive)
	{
		*alst = drive->next;
		ft_lstdelone(&drive, del);
		drive = *alst;
	}
}
