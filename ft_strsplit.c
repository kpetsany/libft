/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetsany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 14:09:28 by kpetsany          #+#    #+#             */
/*   Updated: 2018/07/01 15:50:51 by kpetsany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_counter(char const *s, char c)
{
	int			i;

	i = 0;
	if (*s != c && *s != '\0')
	{
		i++;
		s++;
	}
	while (*s != '\0')
	{
		if (*s != c && s[-1] == c)
			i++;
		s++;
	}
	return (i + 1);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**full;
	int			i;
	int			j;

	if (s == NULL)
		return (NULL);
	full = (char **)malloc(sizeof(char *) * ft_counter(s, c));
	if (full == NULL)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		j = 0;
		while (s[j] != c && s[j] != '\0')
			j++;
		if (j)
		{
			full[i++] = ft_strncpy(ft_strnew(j), s, j);
			s = &s[j];
		}
		else
			s++;
	}
	full[i] = NULL;
	return (full);
}
