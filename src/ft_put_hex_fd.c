/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 03:40:17 by jpires-p          #+#    #+#             */
/*   Updated: 2022/05/13 17:03:16 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_put_hex_fd(int fd, unsigned int num, char flag)
{
	char	buf[17];

	buf[16] = '\0';
	ft_utoa(num, buf, 16);
	if (flag == 'X')
		return (ft_put_str_fd(fd, ft_str_toupper(buf)));
	return (ft_put_str_fd(fd, buf));
}
