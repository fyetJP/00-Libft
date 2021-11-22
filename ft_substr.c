/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:14:25 by jpires-p          #+#    #+#             */
/*   Updated: 2021/09/16 14:16:06 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i[2];
	char	*dst;
	
	if (!s || len <= 0 || start < 0)
		return ((char *)NULL);
	if (!(dst = (char *)malloc(((len + 1) * sizeof(char)))))
		return ((char *)NULL);
	i[0] = 0;
	i[1] = start;
	while (i[0] < len && s[i[1]] != '\0')
		dst[i[0]++] = s[i[1]++];
	dst[i[0]] = '\0';
	
	return (dst);
}