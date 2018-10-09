/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetsany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 15:33:12 by kpetsany          #+#    #+#             */
/*   Updated: 2018/06/13 15:39:04 by kpetsany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s1;

	s1 = (char *)s;
	i = ft_strlen(s1);
	while (i > 0 && s1[i] != (char)c)
		i--;
	if (s[i] == (char)c)
		return (&s1[i]);
	return (NULL);
}
