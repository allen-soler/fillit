/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:40:55 by allespag          #+#    #+#             */
/*   Updated: 2018/11/08 17:22:53 by allespag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*c_dst;
	char	*c_src;
	size_t	i;

	c_dst = (char *)dst;
	c_src = (char *)src;
	i = 0;
	if (c_dst >= c_src && c_src + len >= c_dst)
	{
		while (i < len)
		{
			c_dst[len - i - 1] = c_src[len - i - 1];
			i++;
		}
		return (dst);
	}
	return (ft_memcpy(dst, src, len));
}
