/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:09:16 by allespag          #+#    #+#             */
/*   Updated: 2018/11/07 10:57:50 by allespag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 10 || n <= -10)
		ft_putnbr_fd(n / 10, fd);
	else if (n < 0)
		ft_putchar_fd('-', fd);
	if (n > 0)
		ft_putchar_fd((n % 10) + '0', fd);
	else
		ft_putchar_fd(-(n % 10) + '0', fd);
}
