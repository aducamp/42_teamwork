/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strexp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducamp <aducamp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/23 12:38:06 by aducamp           #+#    #+#             */
/*   Updated: 2015/01/11 21:51:41 by aducamp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strexp(char *s1, size_t len_new)
{
	char	*s2;

	if (!(s2 = ft_strnew(len_new)))
		return (NULL);
	if (s1)
	{
		ft_strncpy(s2, s1, len_new);
		ft_strdel(&s1);
	}
	return (s2);
}
