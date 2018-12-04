/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:35:46 by allespag          #+#    #+#             */
/*   Updated: 2018/11/07 15:46:02 by allespag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*str;

	if (!(str = (char *)malloc((sizeof(char) * ft_strlen(s1)) + 1)))
		return (NULL);
	ft_strcpy(str, s1);
	return (str);
}
