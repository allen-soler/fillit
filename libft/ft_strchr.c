/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:45:16 by allespag          #+#    #+#             */
/*   Updated: 2018/11/08 12:57:46 by allespag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*c_s;
	size_t	i;
	size_t	len_s;

	i = 0;
	c_s = (char *)s;
	len_s = ft_strlen(s);
	while (i <= len_s)
	{
		if (c_s[i] == (char)c)
			return (c_s + i);
		i++;
	}
	return (NULL);
}
