/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:33:04 by jpires-p          #+#    #+#             */
/*   Updated: 2021/11/23 19:44:56 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	if ((unsigned char *)s != (unsigned char *) NULL)
	{
		while (i < n)
		{
			if (*((unsigned char *)s + i) == (unsigned char)c)
				return (((void *)s + i));
			i++;
		}
	}
	return ((void *) NULL);
}
