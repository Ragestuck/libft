/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjakubec <rjakubec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:23:25 by rsk               #+#    #+#             */
/*   Updated: 2017/11/16 15:39:50 by rjakubec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char *a;
	char *b;

	if (*s2 == '\0')
		return (s1);
	while (*s1)
	{
		if (*s1 == *s2)
		{
			a = s1;
			b = s2;
			while (*a && *b && *a == *b)
			{
				a++;
				b++;
			}
			if (*b == '\0')
				return (s1);
		}
		s1++;
	}
	return (NULL);
}
