/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducamp <aducamp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:31:15 by aducamp           #+#    #+#             */
/*   Updated: 2015/01/02 20:06:49 by aducamp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int			n;
	char		seek;
	char		*here;
	char		*nike;

	nike = (char*)s;
	n = 0;
	seek = c;
	here = NULL;
	while (s[n] && (here == NULL))
	{
		if (nike[n] == seek)
			here = (nike + n);
		n++;
	}
	if (nike[n] == seek && (here == NULL))
		here = (nike + n);
	return (here);
}
