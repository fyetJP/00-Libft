/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 03:39:47 by jpires-p          #+#    #+#             */
/*   Updated: 2022/05/13 17:01:43 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conv_s(const char *fmt, va_list ap, int len, int fd)
{
	const char	*s;

	s = va_arg(ap, const char *);
	len += ft_put_str_fd(fd, s);
	return (ft_printf_aux(fmt, ap, len));
}
