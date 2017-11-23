/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjakubec <rjakubec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:44:05 by rsk               #+#    #+#             */
/*   Updated: 2017/11/22 14:00:05 by rjakubec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *i;

	i = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			i = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return (i);
}
