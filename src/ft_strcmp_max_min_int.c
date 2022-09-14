/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_max_min_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:50:57 by jpires-p          #+#    #+#             */
/*   Updated: 2022/06/02 03:52:19 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp_max_min_int(char *str, size_t len)
{
	int		flag;
	char	*maxint;
	char	*minint;

	if (!str || len < 1)
		return (-1);
	flag = 0;
	maxint = ft_itoa(INT_MAX);
	minint = ft_itoa(INT_MIN);
	if (*str == '-')
	{
		if (len >= 10 && ft_strncmp(str, minint, ft_strlen(str)) > 0)
			flag = -1;
	}
	else
	{
		if (*str == '+')
			str++;
		if (len >= 10 && ft_strncmp(str, maxint, ft_strlen(str)) > 0)
			flag = -1;
	}
	free (minint);
	free (maxint);
	return (flag);
}
