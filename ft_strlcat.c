/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetsany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 12:00:19 by kpetsany          #+#    #+#             */
/*   Updated: 2018/06/13 13:03:26 by kpetsany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		len;
	size_t		n;
	char		*s1;

	s1 = (char *)src;
	len = 0;
	while (len < dstsize && *dst && *(dst++))
		len++;
	n = dstsize - len;
	if (!n)
		return (len + ft_strlen(s1));
	while (*src)
	{
		if (n != 1)
		{
			*(dst++) = *src;
			n--;
		}
		src++;
		len++;
	}
	*dst = '\0';
	return (len);
}
