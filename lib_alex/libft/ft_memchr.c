/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducamp <aducamp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:29:52 by aducamp           #+#    #+#             */
/*   Updated: 2015/01/02 20:06:38 by aducamp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					cou;
	unsigned char			*seek;

	cou = 0;
	seek = (unsigned char*)s;
	while (cou < n)
	{
		if (seek[cou] == (unsigned char)c)
			return ((void*)seek + cou);
		cou++;
	}
	return (NULL);
}
