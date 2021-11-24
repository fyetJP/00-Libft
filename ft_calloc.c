/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:23:54 by jpires-p          #+#    #+#             */
/*   Updated: 2021/11/23 17:23:57 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*p_array;
	unsigned char	*buffer;
	size_t			totSize_inc[2];
	
	totSize_inc[0] = size * nmemb;
	if (!(p_array = (void *)malloc(totSize_inc[0])))
		return ((void *)NULL);
	buffer = p_array;
	totSize_inc[1] = 0;
	while (totSize_inc[1] < totSize_inc[0])
	{
		buffer[totSize_inc[1]] = (unsigned char)0;
		totSize_inc[1]++;
	}
	return (p_array);
}
