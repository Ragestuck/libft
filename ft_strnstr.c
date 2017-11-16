/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjakubec <rjakubec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 10:54:49 by rsk               #+#    #+#             */
/*   Updated: 2017/11/16 16:19:06 by rjakubec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	char	*a;
	char	*b;

	if (*s2 == '\0')
		return ((char *)s1);
	while (n > 0 && *s1)
	{
		if (*s1 == *s2)
		{
			i = n;
			a = (char *)s1 + 1;
			b = (char *)s2 + 1;
			while (i < 0 && *a && *b && *a == *b)
			{
				a++;
				b++;
				i--;
			}
			if (b == '\0')
				return ((char *)s1);
		}
		s1++;
	}
	return (NULL);
}
