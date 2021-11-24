/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:33:44 by jpires-p          #+#    #+#             */
/*   Updated: 2021/11/23 17:34:07 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p_s1;
	unsigned char	*p_s2;
	size_t			i;
	
	p_s1 = (unsigned char *)s1;
	p_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	if (p_s1 != (unsigned char *)NULL && p_s2 != (unsigned char *)NULL)
	{
		i = 0;
		while (i < n)
		{
			if (p_s1[i] != p_s2[i])
				return ((int)(p_s1[i] - p_s2[i]));
			i++;
		}
		return (0);
	}
	return ((int)NULL);
}
