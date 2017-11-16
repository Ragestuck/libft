/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjakubec <rjakubec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:19:45 by rsk               #+#    #+#             */
/*   Updated: 2017/11/16 18:56:58 by rjakubec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static	void	ft_putnbrrec(int n)
{
	if ((n / 10) > 0)
		ft_putnbrrec(n / 10);
	ft_putchar((n % 10) + '0');
}

void			ft_putnbr(int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	ft_putnbrrec(n);
}
