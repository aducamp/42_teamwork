/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducamp <aducamp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:35:37 by aducamp           #+#    #+#             */
/*   Updated: 2015/01/02 20:07:14 by aducamp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;

	if (s == NULL)
		return (NULL);
	end = ft_strlen(s) - 1;
	start = 0;
	while ((s[start] == ' ' || s[start] == '\n' ||\
			s[start] == '\t') && s[start] != '\0')
		start++;
	if (s[start] == '\0')
		return (ft_strdup(""));
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	end++;
	return (ft_strsub(s, start, end - start));
}
