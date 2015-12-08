/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducamp <aducamp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 17:03:05 by aducamp           #+#    #+#             */
/*   Updated: 2015/01/02 20:06:58 by aducamp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_inc_counters(char **dest_copy, size_t *counter)
{
	while (**dest_copy && *counter)
	{
		(*counter)--;
		(*dest_copy)++;
	}
}

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*dest_copy;
	const char	*src_copy;
	size_t		counter;
	size_t		dest_len;

	dest_copy = dst;
	src_copy = src;
	counter = size;
	ft_inc_counters(&dest_copy, &counter);
	dest_len = dest_copy - dst;
	counter = size - dest_len;
	if (counter == 0)
		return (ft_strlen(src_copy) + dest_len);
	while (*src_copy)
	{
		if (counter != 1)
		{
			*dest_copy = *src_copy;
			dest_copy++;
			counter--;
		}
		src_copy++;
	}
	*dest_copy = '\0';
	return ((src_copy - src) + dest_len);
}
