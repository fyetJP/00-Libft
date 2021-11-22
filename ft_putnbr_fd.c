/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:14:25 by jpires-p          #+#    #+#             */
/*   Updated: 2021/09/16 14:16:06 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;
	char			c;
	
	if (n < 0)
	{
		c = '-';
		write(fd, &c, sizeof(char));
		nbr = (unsigned int)(-n);
	}
	else
		nbr = (unsigned int)n;
	c = '0';
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	c = '0' + (nbr % 10);
	write(fd, &c, sizeof(char));
}