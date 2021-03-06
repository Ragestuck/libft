/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjakubec <rjakubec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 10:17:35 by rsk               #+#    #+#             */
/*   Updated: 2017/11/22 11:46:09 by rjakubec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	int	ft_isblank(int c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char		*ft_strtrim(const char *s)
{
	char	*tmp;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	tmp = ft_strnew(ft_strlen(s));
	if (!tmp)
		return (NULL);
	while (j < (int)ft_strlen(s))
	{
		if (!i && ft_isblank(s[j]))
			j++;
		else
			tmp[i++] = s[j++];
	}
	while (ft_isblank(tmp[--i]))
		tmp[i] = '\0';
	return (tmp);
}
