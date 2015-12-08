/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducamp <aducamp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:34:40 by aducamp           #+#    #+#             */
/*   Updated: 2015/01/02 20:07:08 by aducamp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char	*a1;
	char	*a2;
	int		len;

	a1 = (char *)s1;
	a2 = (char *)s2;
	len = ft_strlen(a2);
	if (!*s2)
		return (a1);
	while (*a1)
	{
		if (ft_strncmp(a1, a2, len) == 0)
			return (a1);
		a1++;
	}
	return (NULL);
}
