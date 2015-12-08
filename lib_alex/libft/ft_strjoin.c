/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducamp <aducamp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:32:27 by aducamp           #+#    #+#             */
/*   Updated: 2015/01/11 22:16:08 by aducamp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*new_string;
	size_t		n;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	n = ft_strlen(s1) + ft_strlen(s2);
	if (!(new_string = (char*)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	ft_strcpy(new_string, s1);
	ft_strcat(new_string, s2);
	return (new_string);
}
