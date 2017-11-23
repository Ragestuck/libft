/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjakubec <rjakubec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:03:06 by rsk               #+#    #+#             */
/*   Updated: 2017/11/22 12:08:05 by rjakubec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_digitcounter(int n)
{
	int digit;

	digit = 0;
	if (n < 0)
		digit++;
	while (n)
	{
		digit++;
		n /= 10;
	}
	return (digit);
}

static	char	*ft_itoa_int_max(void)
{
	char	*tmp;

	tmp = ft_strnew(12);
	ft_strcpy(tmp, "-2147483648");
	return (tmp);
}

char			*ft_itoa(int n)
{
	char	*tmp;
	int		i;

	if (n == -2147483648)
		return (ft_itoa_int_max());
	tmp = ft_strnew(ft_digitcounter(n) + 1);
	i = ft_digitcounter(n) - 1;
	if (tmp)
	{
		if (n < 0)
		{
			tmp[0] = '-';
			n *= -1;
		}
		if (n == 0)
			tmp[0] = '0';
		while (n > 0)
		{
			tmp[i] = '0' + (n % 10);
			n /= 10;
			i--;
		}
	}
	return (tmp);
}
