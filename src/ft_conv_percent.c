/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_percent.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 03:40:02 by jpires-p          #+#    #+#             */
/*   Updated: 2022/05/13 17:01:32 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conv_percent(const char *fmt, va_list ap, int len, int fd)
{
	int	c;

	c = '%';
	ft_putchar_fd(c, fd);
	len++;
	return (ft_printf_aux(fmt, ap, len));
}
