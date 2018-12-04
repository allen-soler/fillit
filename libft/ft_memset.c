/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:37:48 by allespag          #+#    #+#             */
/*   Updated: 2018/11/07 11:45:20 by allespag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char			*c_b;
	unsigned char	c_c;

	i = 0;
	c_b = (char *)b;
	c_c = (unsigned char)c;
	while (i < len)
	{
		c_b[i] = c_c;
		i++;
	}
	return (b);
}
