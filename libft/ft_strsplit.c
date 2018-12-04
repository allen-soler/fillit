/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:27:41 by allespag          #+#    #+#             */
/*   Updated: 2018/11/09 17:27:07 by allespag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_count_word(char const *s, char c)
{
	int		i;
	int		ok;
	int		res;

	i = 0;
	ok = 1;
	res = 0;
	while (s[i])
	{
		if (s[i] == c)
			ok = 1;
		else if (s[i] != c && ok)
		{
			res++;
			ok = 0;
		}
		i++;
	}
	return (res);
}

char			**ft_strsplit(char const *s, char c)
{
	unsigned int	i;
	size_t			j;
	int				k;
	char			**res;

	i = 0;
	j = 0;
	k = 0;
	if (s == 0)
		return (NULL);
	if (!(res = (char **)malloc(sizeof(char *) * (ft_count_word(s, c) + 1))))
		return (NULL);
	while (k < ft_count_word(s, c))
	{
		while (s[i] == c)
			i++;
		while (s[i + j] != c)
			j++;
		res[k] = ft_strsub(s, i, j);
		k++;
		i += j;
		j = 0;
	}
	res[k] = 0;
	return (res);
}
