/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsk <rsk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:03:06 by rsk               #+#    #+#             */
/*   Updated: 2017/11/16 11:12:19 by rsk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_digitcounter(long n)
{
	int digit;

	digit = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		digit++;
		n *= -1;
	}
	while (n != 0)
	{
		n /= 10;
		digit++;
	}
	return (digit++);
}

char	*ft_itoa(int n)
{
	long	n_long;
	long	lenght;
	char	*nbstr;

	n_long = n;
	lenght = ft_digitcounter(n);
	nbstr = (char *)malloc(sizeof(char) * lenght);
	if (!nbstr)
		return (NULL);
	nbstr[lenght] = '\0';
	if (n_long < 0)
		n_long *= -1;
	while (n_long >= 0)
	{
		nbstr[lenght--] = (n_long % 10) + '0';
		n_long /= 10;
	}
	if (n < 0)
		nbstr[0] = '0';
	return (nbstr);
}