/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjakubec <rjakubec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 13:00:15 by rsk               #+#    #+#             */
/*   Updated: 2017/11/16 17:53:44 by rjakubec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	void	*ret;

	if (!dst || !src)
		return (dst);
	ret = dst;
	if (dst < src)
		while ((unsigned char)(dst - ret) < n)
			*(unsigned char *)dst++ = *(unsigned char *)src++;
	else
		while (n-- > 0)
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
	return (ret);
}
