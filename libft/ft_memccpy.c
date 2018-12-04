/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:42:30 by allespag          #+#    #+#             */
/*   Updated: 2018/11/07 13:35:57 by allespag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*c_dst;
	unsigned char		*c_src;

	i = 0;
	c_dst = (unsigned char *)dst;
	c_src = (unsigned char *)src;
	while (i < n)
	{
		*(c_dst + i) = *(c_src + i);
		if (*(c_src + i) == (unsigned char)c)
			return (c_dst + i + 1);
		i++;
	}
	return (NULL);
}
