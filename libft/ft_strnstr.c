/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:43:14 by allespag          #+#    #+#             */
/*   Updated: 2018/11/08 13:53:35 by allespag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (needle[0] == 0)
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		while (i + j < len && haystack[i + j] == needle[j])
		{
			j++;
			if (!(needle[j]))
				return ((char *)&haystack[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
