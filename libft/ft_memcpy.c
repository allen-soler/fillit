/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:51:30 by allespag          #+#    #+#             */
/*   Updated: 2018/11/07 12:40:42 by allespag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*c_src;
	char	*c_dst;

	i = 0;
	c_src = (char *)src;
	c_dst = (char *)dst;
	while (i < n)
	{
		c_dst[i] = c_src[i];
		i++;
	}
	return (c_dst);
}
