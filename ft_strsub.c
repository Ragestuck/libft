/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjakubec <rjakubec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 10:01:48 by rsk               #+#    #+#             */
/*   Updated: 2017/11/22 13:14:34 by rjakubec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*d;

	if (!s)
		return (NULL);
	d = malloc(sizeof(char) * (len + 1));
	if (!d)
		return (NULL);
	while (start--)
		s++;
	d = ft_strncpy(d, s, len);
	d[len] = '\0';
	return (d);
}
