/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjakubec <rjakubec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:32:07 by rjakubec          #+#    #+#             */
/*   Updated: 2017/11/16 18:56:50 by rjakubec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static	void	ft_putnbrrec_fd(long n, int fd)
{
	if ((n / 10) > 0)
		ft_putnbrrec_fd(n, fd);
	ft_putchar_fd(((n % 10) + '\0'), fd);
}

void			ft_putnbr_fd(int n, int fd)
{
	long nlong;

	nlong = n;
	if (nlong < 0)
	{
		write(fd, "-", 1);
		nlong *= -1;
	}
	ft_putnbrrec_fd(nlong, fd);
}
