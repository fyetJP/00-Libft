/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:38:32 by jpires-p          #+#    #+#             */
/*   Updated: 2021/11/23 18:26:21 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	inc_len[3];
	char	**ret;
	
	if (!s || !(ret = (char **)malloc(((ft_strlen(s) + 1) * sizeof(char *)))))
		return ((char **)NULL);
	inc_len[0] = 0;
	inc_len[1] = 0;
	inc_len[2] = 0;
	while (s[inc_len[0]]  != '\0')
	{
		if (c != (char)s[inc_len[0]])
			inc_len[0]++;
		else
		{
			ret[inc_len[2]] = ft_substr(s, inc_len[1], inc_len[0] - inc_len[1]);
			inc_len[2]++;
			while ((char)s[inc_len[0]] == c)
				inc_len[0]++;
			inc_len[1] = inc_len[0];
		}
	}
	ret[inc_len[2]] = ft_substr(s, inc_len[1], inc_len[0] - inc_len[1]);
	ret[inc_len[2] + 1] = "\0";
	return (ret);
}
//Possible problem with malloc, if fail revisit this.
//inc_len[] is an array of increments and lengths.
//inc_len[0] is increment for searching the string passed and tells the end of the word
//inc_len[1] is the start of the word
//inc_len[2] is the increment for the return pointer to pointer and tells the number of words
