/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:53:03 by allespag          #+#    #+#             */
/*   Updated: 2018/11/07 16:14:46 by allespag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		i;
	size_t		len_src;
	char		*s_src;

	i = 0;
	len_src = ft_strlen(src);
	s_src = (char *)src;
	while (i < len)
	{
		dst[i] = s_src[i];
		i++;
		while (i >= len_src && i < len)
		{
			dst[i] = '\0';
			i++;
		}
	}
	return (dst);
}
