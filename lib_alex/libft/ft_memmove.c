/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducamp <aducamp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:30:19 by aducamp           #+#    #+#             */
/*   Updated: 2015/01/02 20:06:40 by aducamp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*a1;
	char		*a2;

	a1 = (char *)s1;
	a2 = (char *)s2;
	if (s1 <= s2)
		return (ft_memcpy(s1, s2, n));
	a1 += n;
	a2 += n;
	while (n--)
		*--a1 = *--a2;
	return (s1);
}
