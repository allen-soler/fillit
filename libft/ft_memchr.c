/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:38:56 by allespag          #+#    #+#             */
/*   Updated: 2018/11/07 15:02:04 by allespag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*c_s;
	unsigned char		c_c;

	i = 0;
	c_s = (unsigned char *)s;
	c_c = (unsigned char)c;
	while (i < n)
	{
		if (c_s[i] == c_c)
			return (&c_s[i]);
		i++;
	}
	return (NULL);
}
