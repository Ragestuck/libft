/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjakubec <rjakubec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 10:27:05 by rsk               #+#    #+#             */
/*   Updated: 2017/11/22 14:14:58 by rjakubec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_wordscount(const char *s, const char c)
{
	int		words;

	while (*s && *s == c)
		s++;
	words = (*s) ? 1 : 0;
	while (*s)
	{
		if (*s == c && s[1] && s[1] != c)
			words++;
		++s;
	}
	return (words);
}

char			**ft_strsplit(const char *s, const char c)
{
	int		words;
	char	*start;
	char	**tab;

	if (!s)
		return (NULL);
	words = ft_wordscount((char *)s, c);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	start = (char *)s;
	while (*s)
	{
		if (*s == c)
		{
			if (start != s)
				*(tab++) = ft_strsub(start, 0, (s - start));
			start = (char *)s + 1;
		}
		s++;
	}
	if (start != s)
		*(tab++) = ft_strsub(start, 0, (s - start));
	*tab = NULL;
	return (tab - words);
}
