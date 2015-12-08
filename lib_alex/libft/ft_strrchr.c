/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducamp <aducamp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:34:17 by aducamp           #+#    #+#             */
/*   Updated: 2015/01/02 20:07:07 by aducamp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		n;
	char	seek;
	char	*here;
	char	*so;

	so = (char*)s;
	n = 0;
	seek = (char)c;
	here = NULL;
	while (so[n])
	{
		if (so[n] == seek)
			here = (so + n);
		n++;
	}
	if (so[n] == seek)
		here = (so + n);
	return (here);
}
