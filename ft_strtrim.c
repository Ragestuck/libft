/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsk <rsk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 10:17:35 by rsk               #+#    #+#             */
/*   Updated: 2017/11/16 10:25:42 by rsk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char	*d;
	int		i;
	
	i = 0;
	d = (char *)malloc(sizeof(char) * (strlen(s) + 1));
	if (!d)
		return (NULL);
	while (*s)
	{
		if (*s != ' ' || *s != '\n' || *s != '\t')
			d[i++] = *s;
		s++;
	}
	d[i] = '\0';
	return (d);
}