/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducamp <aducamp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:29:57 by aducamp           #+#    #+#             */
/*   Updated: 2015/01/02 20:06:38 by aducamp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int		c;
	unsigned char		*a1;
	unsigned char		*a2;

	c = 0;
	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	while ((a1[c] == a2[c]) && (c < n))
		c++;
	if (!s1 && !s2)
		return (0);
	if (c == n)
		return (0);
	return ((int)(a1[c] - a2[c]));
}
