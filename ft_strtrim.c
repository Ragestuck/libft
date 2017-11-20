/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjakubec <rjakubec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 10:17:35 by rsk               #+#    #+#             */
/*   Updated: 2017/11/20 15:11:00 by rjakubec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strtrim(const char *s)
{
	char	*tmp;
	char	*ret;
	int		i;
	int		j;

	j = 0;
	tmp = (char *)s;
	while (*tmp == ' ' || *tmp == '\t' || *tmp == '\n')
		tmp++;
	if (!tmp)
		i = 1;
	else
	{
		i = ft_strlen(tmp) - 1;
		while (tmp[i] == ' ' || tmp[i] == '\t' || tmp[i] == '\n')
			i--;
		i += 2;
	}
	ret = (char *)malloc(sizeof(char) * i);
	if (!ret)
		return (NULL);
	while (j < i - 1)
	{
		ret[j] = tmp[j];
		j++;
	}
	ret[j] = '\0';
	return (ret);
}
