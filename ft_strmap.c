/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjakubec <rjakubec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 13:34:50 by rsk               #+#    #+#             */
/*   Updated: 2017/11/20 12:53:30 by rjakubec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*new;
	unsigned int	i;

	new = ft_strnew(ft_strlen(s));
	if (!new)
		return (NULL);
	i = -1;
	while (s[++i])
		new[i] = f(s[i]);
	new[i] = '\0';
	return (new);
}
