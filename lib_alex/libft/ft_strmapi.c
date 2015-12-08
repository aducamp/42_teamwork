/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducamp <aducamp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:33:26 by aducamp           #+#    #+#             */
/*   Updated: 2015/01/11 22:17:42 by aducamp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*mem_fresh;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	if (!(mem_fresh = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i])
	{
		mem_fresh[i] = f(i, s[i]);
		i++;
	}
	mem_fresh[i] = '\0';
	return (mem_fresh);
}
