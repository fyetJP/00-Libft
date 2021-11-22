/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:14:25 by jpires-p          #+#    #+#             */
/*   Updated: 2021/09/16 14:16:06 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char		to_find;
	const char	*p_last_ocu;
	
	if (s == (const char *)NULL || !s)
		return ((char *)NULL);
	to_find = (char)c;
	while (*s != '\0')
	{
		if (*s == to_find)
			p_last_ocu = s;
		*s++;
	}
	if (to_find == '\0')
		p_last_ocu = s;
	if (*p_last_ocu != to_find)
		return ((char *)NULL);
	return ((char *)p_last_ocu);
}