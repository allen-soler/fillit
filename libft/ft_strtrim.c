/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:48:07 by allespag          #+#    #+#             */
/*   Updated: 2018/11/10 15:28:55 by allespag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strtrim(char const *s)
{
	size_t			i;
	char			*str;
	size_t			len_s;
	unsigned int	j;

	i = 0;
	j = 0;
	if (s == 0)
		return (NULL);
	len_s = ft_strlen(s);
	while (s[j] == ' ' || s[j] == ',' || s[j] == '\n' || s[j] == '\t')
		j++;
	while (s[len_s - i - 1] == ' ' || s[len_s - i - 1] == ','
		|| s[len_s - i - 1] == '\n' || s[len_s - i - 1] == '\t')
	{
		i++;
		if (len_s - i - 1 < j)
			return (ft_strdup(""));
	}
	if (i == 0 && j == 0)
		return (ft_strdup(s));
	str = ft_strsub(s, j, len_s - i - j);
	return (str);
}
