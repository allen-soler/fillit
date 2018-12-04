/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:58:41 by allespag          #+#    #+#             */
/*   Updated: 2018/11/08 13:06:52 by allespag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int			found;
	char		*c_s;
	size_t		i;
	size_t		len_s;

	found = -1;
	c_s = (char *)s;
	i = 0;
	len_s = ft_strlen(s);
	while (i <= len_s)
	{
		if (c_s[i] == (char)c)
			found = i;
		i++;
	}
	return ((found < 0) ? NULL : c_s + found);
}
