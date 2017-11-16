/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjakubec <rjakubec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:44:05 by rsk               #+#    #+#             */
/*   Updated: 2017/11/16 18:29:28 by rjakubec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while (s != (s + i))
	{
		if ((int)(s + i) == c)
			return ((char *)(s + i));
		i--;
	}
	if ((int)s == c)
		return ((char *)s);
	else
		return (NULL);
}
