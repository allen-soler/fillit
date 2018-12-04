/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 19:34:04 by allespag          #+#    #+#             */
/*   Updated: 2018/11/10 14:30:23 by allespag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (1);
	if (s1 == 0 || s2 == 0)
		return (0);
	while (s1[i] == s2[i] && i < n)
	{
		if (((!s1[i]) && (!s2[i])) || i == n - 1)
			return (1);
		i++;
	}
	return (0);
}
