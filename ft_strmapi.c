/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:14:25 by jpires-p          #+#    #+#             */
/*   Updated: 2021/09/16 14:16:06 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret_str;
	unsigned int	i;
	
	i = 0;
	if (!s || !f)
		return ((char *)NULL);
	if (!(ret_str = (char *) malloc((strlen(s) + 1) * sizeof(char))))
		return ((char *)NULL);
	while (s[i] != '\0')
	{
		ret_str[i] = f(i, (char)s[i]);
		i++;
	}
	ret_str[i] = '\0';
	return (ret_str);
}