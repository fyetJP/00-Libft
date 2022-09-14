/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 04:46:11 by jpires-p          #+#    #+#             */
/*   Updated: 2022/05/13 17:02:32 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_oom_guard(void *p)
{	
	if (p == NULL)
	{
		ft_put_str_fd(2, "\nDANGER!\nOut of memory");
		return (NULL);
	}
	return (p);
}
