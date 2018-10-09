/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetsany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 16:01:41 by kpetsany          #+#    #+#             */
/*   Updated: 2018/06/13 13:56:22 by kpetsany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char		chr;
	size_t		i;
	char		*str;

	i = 0;
	chr = (char)c;
	str = (char *)b;
	while (i < len)
	{
		str[i] = chr;
		i++;
	}
	return (b);
}
