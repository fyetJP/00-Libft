/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:14:25 by jpires-p          #+#    #+#             */
/*   Updated: 2021/09/16 14:16:06 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		str_len[2];
	size_t		inc[2];
	
	str_len[0] = 0;
	str_len[1] = 0;
	while (src[str_len[0]] != '\0' && dst[str_len[1]] != '\0')
	{
		if (src[str_len[0]] != '\0')
			str_len[0]++;
		if (dst[str_len[1]] != '\0')
			str_len[1]++;
	}
	if (size <= str_len[1])
		return (size + str_len[0]);
	inc[0] = str_len[1];
	inc[1] = 0;
	while (src[inc[1]] != '\0' && inc[0] + 1 < size)
	{
		dst[inc[0]] = src[inc[1]];
		inc[0]++;
		inc[1]++;
	}
	dst[inc[0]] = '\0';
	return (str_len[1] + str_len[0]);
}