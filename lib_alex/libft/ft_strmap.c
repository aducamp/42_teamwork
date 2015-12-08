/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducamp <aducamp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:33:07 by aducamp           #+#    #+#             */
/*   Updated: 2015/01/11 22:17:02 by aducamp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*mem_fresh;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	if (!(mem_fresh = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i])
	{
		mem_fresh[i] = f(s[i]);
		i++;
	}
	mem_fresh[i] = '\0';
	return (mem_fresh);
}
