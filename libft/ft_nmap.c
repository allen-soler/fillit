/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 20:36:35 by jallen            #+#    #+#             */
/*   Updated: 2018/11/29 20:36:58 by jallen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_nmap(char **map, int w)
{
	int		i;
	char	**nmap;

	i = 0;
	if (!(nmap = (char **)malloc(sizeof(char **) * (w + 1))))
		return (0);
	while (i < w)
	{
		nmap[i] = ft_strndup(map[i], w);
		i++;
	}
	nmap[i] = 0;
	return (nmap);
}
