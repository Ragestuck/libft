/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjakubec <rjakubec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 10:54:49 by rsk               #+#    #+#             */
/*   Updated: 2017/11/20 12:32:54 by rjakubec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	char	*a;
	char	*b;

	if (!*s2)
		return ((void *)s1);
	while (n-- && *s1)
	{
		if (*s1 == *s2)
		{
			i = n;
			a = (void *)s1 + 1;
			b = (void *)s2 + 1;
			while (i-- && *a && *b && *a == *b)
			{
				a++;
				b++;
			}
			if (!*b)
				return ((void *)s1);
		}
		s1++;
	}
	return (NULL);
}
