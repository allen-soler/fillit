/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush_bck.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 11:52:10 by allespag          #+#    #+#             */
/*   Updated: 2018/11/27 15:39:19 by allespag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstpush_bck(t_list **alst, t_list *new)
{
	t_list		*tmp;

	if (!alst || !new)
		return ;
	tmp = *alst;
	if (!*alst)
		*alst = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp = new;
	}
}
