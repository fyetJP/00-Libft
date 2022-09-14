/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:00:06 by jpires-p          #+#    #+#             */
/*   Updated: 2022/05/13 16:24:53 by jpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef MAX_FD
#  define MAX_FD 1025
# endif

/* ***************GNL************ */
char	*get_next_line(int fd);
char	*ft_read_to_str(int fd);
char	*ft_process_line(const char *str);
char	*ft_get_buff_after_nl(char *str_to_trim, unsigned int size_to_trim);
int		ft_check_null_and_free(char *p, char **p2p, int fd);

/* ***************UTILS************ */
char	*ft_realloc_strjoin(char *tmp, char *src);

#endif