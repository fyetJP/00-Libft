/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_toupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 03:40:59 by jpires-p          #+#    #+#             */
/*   Updated: 2022/05/13 17:04:16 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_str_toupper(char *str)
{
	unsigned int	i;

	if (!str)
		return ((char *) NULL);
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isalpha(str[i]))
			str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}
