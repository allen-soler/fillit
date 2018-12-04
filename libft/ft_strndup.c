/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 15:38:07 by jallen            #+#    #+#             */
/*   Updated: 2018/11/29 15:46:50 by jallen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t len)
{
	char		*dest;

	if (!(dest = malloc(sizeof(char) * len)))
		return (0);
	ft_strncpy(dest, s1, len);
	return (dest);
}
