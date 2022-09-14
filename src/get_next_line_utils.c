/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:00:02 by jpires-p          #+#    #+#             */
/*   Updated: 2022/05/13 16:09:55 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_realloc_strjoin(char *tmp, char *src)
{
	char	*dst;

	dst = (char *) NULL;
	if (tmp == (char *) NULL && src != (char *) NULL)
	{
		dst = ft_strjoin("", src);
		free(src);
		src = (char *) NULL;
	}
	else if (tmp != (char *) NULL && src != (char *) NULL)
	{
		dst = ft_strjoin(tmp, src);
		free(tmp);
		tmp = (char *) NULL;
		free(src);
		src = (char *) NULL;
	}
	else if (tmp != (char *) NULL && src == (char *) NULL)
	{
		dst = ft_strjoin(tmp, "");
		free(tmp);
		tmp = (char *) NULL;
	}
	return (dst);
}
