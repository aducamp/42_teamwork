/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducamp <aducamp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/02 17:08:35 by aducamp           #+#    #+#             */
/*   Updated: 2015/01/11 22:34:47 by aducamp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_malloclen(int i)
{
	char		**ret;

	if (!(ret = (char**)malloc(sizeof(char *) * (i + 1))))
		return (NULL);
	ret[i] = NULL;
	return (ret);
}

static int		ft_countcharc(const char *s1, char c)
{
	int		i;
	int		len;

	len = 0;
	i = -1;
	if (s1[0] != c && s1[0])
		len++;
	while (s1[++i])
		if (s1[i] == c && s1[i + 1] != c && s1[i + 1])
			len++;
	return (len);
}

static char		**ft_fillret(char **ret, const char *s1, char c)
{
	int		i;
	int		len;
	int		j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		len = 0;
		while (s1[i] == c)
			i++;
		if (!s1[i])
			break ;
		while (s1[i + len] != c && s1[i + len])
			len++;
		if (!(ret[j++] = ft_strndup(s1 + i, len)))
			return (NULL);
		i += len;
	}
	return (ret);
}

char			**ft_strsplit(const char *s1, char c)
{
	char		**ret;

	if (!s1)
		return (NULL);
	if (!(ret = ft_malloclen(ft_countcharc(s1, c))))
		return (NULL);
	if (!(ret = ft_fillret(ret, s1, c)))
		return (NULL);
	return (ret);
}
