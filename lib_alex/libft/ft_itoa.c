/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducamp <aducamp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:29:30 by aducamp           #+#    #+#             */
/*   Updated: 2015/01/02 20:27:35 by aducamp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_getlen(int *len, int n)
{
	if (n > 0)
		*len = 0;
	else if (n <= 0)
		*len = 1;
	while (n != 0)
	{
		n /= 10;
		(*len)++;
	}
}

static void		ft_putnbr_str(char *ret, int len, int n)
{
	if (n < 0)
	{
		n *= -1;
		ret[0] = '-';
	}
	if (n == 0)
		ret[0] = '0';
	while (n != 0)
	{
		len--;
		ret[len] = n % 10 + '0';
		n /= 10;
	}
}

char			*ft_itoa(int n)
{
	char		*ret;
	int			len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ft_getlen(&len, n);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (ret != NULL)
	{
		ft_putnbr_str(ret, len, n);
		ret[len] = '\0';
	}
	return (ret);
}
