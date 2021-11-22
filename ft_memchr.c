/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:14:25 by jpires-p          #+#    #+#             */
/*   Updated: 2021/09/16 14:16:06 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*buffer;
	
	buffer = (unsigned char *)s;
	if (buffer != (unsigned char *)NULL)
	{
		while (n > 0  && *buffer != '\0')
		{
			if (*buffer == (unsigned char)c)
				return (buffer);
			n--;
			buffer++;
		}
		if ((unsigned char)c == '\0')
			return (buffer);
	}
	return ((unsigned char *)NULL);
}