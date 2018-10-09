/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetsany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 17:12:52 by kpetsany          #+#    #+#             */
/*   Updated: 2018/06/29 14:53:40 by kpetsany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_spaces(int c)
{
	if ((c >= '\t' && c <= '\r') || c == 32)
		return (1);
	return (0);
}

int				ft_atoi(const char *str)
{
	int		val;
	int		sign;
	int		m;

	val = 0;
	sign = 1;
	m = 0;
	while (ft_spaces(*str))
		str += 1;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		val *= 10;
		val += (int)(*str - '0');
		str++;
		m++;
	}
	if (m > 19)
		return ((sign < 0) ? 0 : -1);
	return ((val * sign));
}
