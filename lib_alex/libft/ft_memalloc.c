/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducamp <aducamp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:29:43 by aducamp           #+#    #+#             */
/*   Updated: 2015/01/11 22:11:42 by aducamp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned int	c;
	void			*mem;
	char			*fill;

	c = 0;
	if (!(mem = malloc(size)))
		return (NULL);
	fill = (char *)mem;
	if (mem != NULL)
	{
		while (c++ < size)
			*fill++ = 0;
	}
	return (mem);
}
