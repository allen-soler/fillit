/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:09:58 by allespag          #+#    #+#             */
/*   Updated: 2018/11/08 13:40:20 by allespag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (needle[0] == 0)
		return ((char *)haystack);
	while (haystack[i])
	{
		while (haystack[i + j] == needle[j])
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
