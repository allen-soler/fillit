/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:05:21 by allespag          #+#    #+#             */
/*   Updated: 2018/11/10 14:14:47 by allespag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	res;
	long	prev;

	i = 0;
	sign = 1;
	res = 0;
	prev = -1;
	while (str[i] == 127 || (str[i] >= 0 && str[i] <= 32 && str[i] != '\e'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = ((str[i] == '-') ? -1 : 1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + str[i] - '0';
		if (prev > res)
			return (sign == 1 ? -1 : 0);
		prev = res;
		i++;
	}
	return (sign * (int)res);
}
