/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducamp <aducamp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:34:54 by aducamp           #+#    #+#             */
/*   Updated: 2015/01/02 20:07:09 by aducamp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*mem_fresh;
	size_t	i;

	i = -1;
	if (!s)
		return (NULL);
	if (!(mem_fresh = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (++i < len)
		mem_fresh[i] = s[i + start];
	mem_fresh[len] = '\0';
	return (mem_fresh);
}
