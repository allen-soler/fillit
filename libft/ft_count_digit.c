/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:46:46 by allespag          #+#    #+#             */
/*   Updated: 2018/11/09 16:52:50 by allespag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_digit(int n)
{
	int		res;

	if (!n)
		return (1);
	res = (n < 0) ? 1 : 0;
	while (n)
	{
		n /= 10;
		res++;
	}
	return (res);
}
