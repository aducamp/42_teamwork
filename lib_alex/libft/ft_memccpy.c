/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducamp <aducamp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:29:47 by aducamp           #+#    #+#             */
/*   Updated: 2015/01/02 20:06:36 by aducamp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char		*a1;
	char		*a2;

	a1 = (char*)s1;
	a2 = (char*)s2;
	while (n--)
	{
		if (*a2 == c)
		{
			*a1++ = *a2++;
			return (a1);
		}
		*a1++ = *a2++;
	}
	return (NULL);
}
