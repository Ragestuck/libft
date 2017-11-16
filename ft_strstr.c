/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjakubec <rjakubec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:23:25 by rsk               #+#    #+#             */
/*   Updated: 2017/11/16 18:30:13 by rjakubec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char *a;
	char *b;

	if (*s2 == '\0')
		return ((char *)s1);
	while (*s1)
	{
		if (*s1 == *s2)
		{
			a = (char *)s1;
			b = (char *)s2;
			while (*a && *b && *a == *b)
			{
				a++;
				b++;
			}
			if (*b == '\0')
				return ((char *)s1);
		}
		s1++;
	}
	return (NULL);
}
