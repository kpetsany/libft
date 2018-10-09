/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetsany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 13:52:39 by kpetsany          #+#    #+#             */
/*   Updated: 2018/07/09 14:50:01 by kpetsany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*str;
	char		*final_str;
	int			j;
	int			val;

	j = 0;
	if (!s1 || !s2)
		return (NULL);
	val = ((ft_strlen(s1)) + (ft_strlen(s2)));
	if ((str = (char *)malloc(sizeof(char) * val)))
	{
		str[j] = '\0';
		str = ft_strcat(str, s1);
		final_str = ft_strcat(str, s2);
		return (final_str);
	}
	return (NULL);
}
