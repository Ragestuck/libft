/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjakubec <rjakubec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 10:27:05 by rsk               #+#    #+#             */
/*   Updated: 2017/11/16 19:00:55 by rjakubec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_wordscount(const char *s, const char c)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (s[i + 1] == c || s[i + 1] == '\0')
				words++;
		}
		i++;
	}
	return (i);
}

static	int		ft_strsizeforsplit(const char *s, const char c)
{
	int		i;

	i = 0;
	while (*s != c && *s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

char			**ft_strsplit(const char *s, const char c)
{
	char	**t;
	int		i;
	int		j;

	j = 0;
	i = ft_wordscount(s, c) + 1;
	t = (char **)malloc(sizeof(char *) * i);
	if (!t)
		return (NULL);
	while (i--)
	{
		while (*s == c || *s == '\0')
			s++;
		t[j] = ft_strsub(s, 0, ft_strsizeforsplit(s, c));
		if (!t[j])
			return (NULL);
		s += ft_strsizeforsplit(s, c);
		j++;
	}
	t[j] = NULL;
	return (t);
}
