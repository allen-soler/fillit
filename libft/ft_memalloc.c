/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:24:29 by allespag          #+#    #+#             */
/*   Updated: 2018/11/08 17:49:28 by allespag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!(str = (char *)malloc(size)))
		return (NULL);
	while (i < size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
