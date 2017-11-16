/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjakubec <rjakubec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 13:00:15 by rsk               #+#    #+#             */
/*   Updated: 2017/11/16 17:04:39 by rjakubec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	dest = malloc(sizeof(int) * n);
	if (!dest)
		return (NULL);
	while (n--)
		dest[n] = (void *)src[n];
	return (dest);
}
