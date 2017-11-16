/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsk <rsk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:19:45 by rsk               #+#    #+#             */
/*   Updated: 2017/11/16 11:26:05 by rsk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbrrec(int n)
{
	if ((n / 10) > 0)
		ft_putnbrrec(n / 10);
	ft_putchar((n % 10) + '0');
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	ft_putnbrrec(n);
}

int		main(void)
{
	ft_putnbr(-852);
	return (0);
}