/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetsany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 15:24:37 by kpetsany          #+#    #+#             */
/*   Updated: 2018/06/25 15:35:16 by kpetsany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	ft_memset((void*)str, '\0', size);
	return ((void*)str);
}
