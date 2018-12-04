/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_free.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 15:35:25 by allespag          #+#    #+#             */
/*   Updated: 2018/12/03 17:49:11 by jallen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	lst_free(t_lst *alst)
{
	if (alst->next)
		lst_free(alst->next);
	big_free(alst->ptr);
	free(alst);
}

void	free_lines(char **map)
{
	int		i;

	i = 0;
	while (map && map[i])
	{
		free(map[i]);
		i++;
	}
}

void	big_free(char **map)
{
	int		i;

	i = 0;
	while (map && map[i])
	{
		free(map[i]);
		i++;
	}
	if (map)
		free(map);
}

void	ft_ret(int ret, char **line)
{
	if (ret != 0 && line[0][0] != 0)
		msg_exit();
	if (ret != 0)
		free(line[0]);
}
