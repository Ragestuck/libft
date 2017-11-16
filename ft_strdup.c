/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjakubec <rjakubec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:39:04 by rsk               #+#    #+#             */
/*   Updated: 2017/11/16 15:48:40 by rjakubec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char *ret;

	ret = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))
	ft_strcpy(ret, s);
	return (ret);
}
