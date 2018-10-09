/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetsany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 15:07:38 by kpetsany          #+#    #+#             */
/*   Updated: 2018/07/05 16:24:39 by kpetsany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	if (!n)
		return (0);
	while (*s1 != '\0' && *s2 != '\0' && i < n)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		i++;
	}
	if (i == n)
		return (0);
	return (((unsigned char)*s1) - ((unsigned char)*s2));
}
