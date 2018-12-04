/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:25:33 by allespag          #+#    #+#             */
/*   Updated: 2018/11/09 15:57:20 by allespag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	tmp;

	i = 0;
	len = (int)ft_strlen(str);
	while (i < len / 2)
	{
		tmp = str[len - i - 1];
		str[len - i - 1] = str[i];
		str[i] = tmp;
		i++;
	}
	return (str);
}
