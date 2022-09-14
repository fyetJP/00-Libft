/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr_u_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 03:40:30 by jpires-p          #+#    #+#             */
/*   Updated: 2022/05/13 17:03:31 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_put_nbr_u_fd(int fd, unsigned int num)
{
	char	buf[11];

	buf[10] = '\0';
	ft_utoa(num, buf, 10);
	return (ft_put_str_fd(fd, buf));
}
