/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 03:39:32 by jpires-p          #+#    #+#             */
/*   Updated: 2022/05/13 17:02:16 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conv_u(const char *fmt, va_list ap, int len, int fd)
{
	unsigned int	n;

	n = va_arg(ap, unsigned int);
	len += ft_put_nbr_u_fd(fd, n);
	return (ft_printf_aux(fmt, ap, len));
}
