/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:39:17 by jpires-p          #+#    #+#             */
/*   Updated: 2021/11/23 18:36:55 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	to_find;

	if (s == (const char *) NULL || !s)
		return ((char *) NULL);
	to_find = (char)c;
	while (*s != '\0' && *s != to_find)
		s++;
	if (*s != to_find)
		return ((char *) NULL);
	return ((char *)s);
}
