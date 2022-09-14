/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:51:08 by jpires-p          #+#    #+#             */
/*   Updated: 2022/06/01 18:55:42 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strisint(char *str)
{
	unsigned int	len;
	unsigned int	is_sign;

	is_sign = 0;
	if (!str)
		return (-1);
	len = ft_strlen(str);
	if (*str == '-' || *str == '+')
		is_sign = 1;
	if (is_sign == 1 && len > 11)
		return (0);
	else if (is_sign == 0 && len > 10)
		return (0);
	if (ft_strcmp_max_min_int(str, len) != 0)
		return (0);
	return (1);
}
