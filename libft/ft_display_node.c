/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 13:45:51 by allespag          #+#    #+#             */
/*   Updated: 2018/11/17 13:50:37 by allespag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_display_node(t_list *lst)
{
	ft_putendl("--NODE--");
	ft_putstr("> content = ");
	ft_putendl(lst->content);
	ft_putstr("> content_size = ");
	ft_putnbr(lst->content_size);
	ft_putchar('\n');
}
