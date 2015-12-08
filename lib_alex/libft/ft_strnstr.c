/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducamp <aducamp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:34:13 by aducamp           #+#    #+#             */
/*   Updated: 2015/01/02 20:07:07 by aducamp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2	, size_t n)
{
	char		s1_copy[n + 1];
	char		*res;
	size_t		adress_cpy;

	adress_cpy = 0;
	ft_strncpy(s1_copy, s1, n);
	if (n < ft_strlen(s1))
		s1_copy[n] = '\0';
	if (!*s2)
		return ((char*)s1);
	if ((res = ft_strstr(s1_copy, s2)))
	{
		adress_cpy = res - s1_copy;
		return ((char*)(s1 + adress_cpy));
	}
	return (NULL);
}
