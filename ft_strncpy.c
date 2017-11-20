/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjakubec <rjakubec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:27:06 by rsk               #+#    #+#             */
/*   Updated: 2017/11/20 11:43:49 by rjakubec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*ret;
	size_t	start;

	ret = (char *)dst;
	start = n;
	while (*src && n--)
		*dst++ = *src++;
	if (n <= start)
		ft_bzero(dst, n);
	return (ret);
}
