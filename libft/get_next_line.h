/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 16:22:18 by allespag          #+#    #+#             */
/*   Updated: 2018/11/30 17:01:20 by jallen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 1024

# include "libft.h"

# include <fcntl.h>

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

# include <stdlib.h>

int		ft_free_stuff(void *stuff);
int		get_next_line(const int fd, char **line);

#endif
