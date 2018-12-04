/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:44:07 by allespag          #+#    #+#             */
/*   Updated: 2018/11/09 17:10:25 by allespag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_itoa(int n)
{
	int		i;
	int		sign;
	int		digit;
	char	*str;

	i = 0;
	sign = (n < 0) ? 1 : 0;
	digit = ft_count_digit(n);
	if (!(str = (char *)malloc(sizeof(char) * (digit + 1))))
		return (NULL);
	while (i < digit)
	{
		str[digit - i - 1] = (n < 0) ? '0' - (n % 10) : '0' + (n % 10);
		n /= 10;
		i++;
	}
	if (sign)
		str[0] = '-';
	str[digit] = '\0';
	return (str);
}
