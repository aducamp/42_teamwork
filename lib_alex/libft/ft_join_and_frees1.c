/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join_and_frees1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducamp <aducamp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 17:40:18 by aducamp           #+#    #+#             */
/*   Updated: 2015/01/11 18:30:02 by aducamp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_join_and_frees1(char *s1, char *s2)
{
	char		*s3;

	s3 = ft_strjoin(s1, s2);
	free(s1);
	return (s3);
}
