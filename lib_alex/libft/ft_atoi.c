/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducamp <aducamp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:28:11 by aducamp           #+#    #+#             */
/*   Updated: 2015/01/02 20:06:12 by aducamp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned int	num;
	int				positive;
	int				result;

	num = 0;
	result = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\r' || *str == '\f')
		str++;
	positive = (*str == '-' ? -1 : 1);
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str) && *str)
	{
		num = (int)(*str - '0');
		result = result * 10 + num;
		str++;
	}
	result *= positive;
	return (result);
}
