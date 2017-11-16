/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjakubec <rjakubec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:44:05 by rsk               #+#    #+#             */
/*   Updated: 2017/11/16 15:39:43 by rjakubec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while (s != (s + i))
	{
		if ((s + i) == c)
			return (s + i);
		i--;
	}
	if (s == c)
		return (s);
	else
		return (NULL);
}
