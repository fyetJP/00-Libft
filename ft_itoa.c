/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:26:59 by jpires-p          #+#    #+#             */
/*   Updated: 2021/11/23 17:27:10 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr[2];
	
	nbr[0] = n;
	nbr[1] = 1;
	while (n /= 10)
		nbr[1]++;
	if(!(str = (char *)malloc((nbr[1] + 2) * sizeof(char))))
		return ((char *)NULL);
	str[nbr[1] + 1] = '\0';
	if(nbr[0] >= 0)
		str[0] = '0';
	else if (nbr[0] < 0)
	{
		nbr[0] = -nbr[0];
		str[0] = '-';
	}
	while (nbr[1])
	{
		str[nbr[1]--] = (nbr[0] % 10) + '0';
		nbr[0] /= 10;
	}
	if (str[0] != '-')
		str++;
	return (str);
}
