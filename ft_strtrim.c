/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:14:25 by jpires-p          #+#    #+#             */
/*   Updated: 2021/09/16 14:16:06 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	inc_len[3];
	
	if (!s1 || !set )
		return ((char *)NULL);
	inc_len[0] = 0;
	inc_len[1] = 0;
	inc_len[2] = ft_strlen(s1) - 1;
	while (set[inc_len[1]])
	{
		if (s1[inc_len[0]] != set[inc_len[1]])
			inc_len[1]++;
		else
		{
			inc_len[0]++;
			inc_len[1] = 0;
		}
		if (s1[inc_len[2]] != set[inc_len[1]])
			continue ;
		else
		{
			inc_len[2]--;
			inc_len[1] = 0;
		}
  }
  return (ft_substr(s1, inc_len[0], (inc_len[2] + 1) - inc_len[0]));
}