/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:14:25 by jpires-p          #+#    #+#             */
/*   Updated: 2021/09/16 14:16:06 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t  i[2];
	
	if (*little == '\0')
		return ((char *)big);
	if (len == 0)
		return ((char *)NULL);
	i[0] = 0;
	i[1] = 0;
	while (1)
	{
		if (little[i[1]] == '\0')
			return ((char *)big + (i[0] - i[1]));
		if (big[i[0]] == little[i[1]])
			i[1]++;
		else
		{
			i[0] -= i[1];
			i[1] = 0;
		}
		if (big[i[0]] == '\0' || i[0] >= len)
			return ((char *)NULL);
		i[0]++;
	}
}