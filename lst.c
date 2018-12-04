/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:22:50 by allespag          #+#    #+#             */
/*   Updated: 2018/12/03 16:49:35 by jallen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "fillit.h"
#include "libft/libft.h"

int		lst_len(t_lst *alst)
{
	int		i;
	t_lst	*tmp;

	i = 0;
	tmp = alst;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

t_lst	*lst_new_node(char **map)
{
	int		i;
	t_lst	*new;
	char	**cpy;

	i = 0;
	if (!(cpy = (char **)malloc(sizeof(char *) * 5)))
		msg_exit();
	if (!(new = (t_lst *)malloc(sizeof(t_lst))))
		msg_exit();
	cpy[4] = 0;
	while (map[i])
	{
		if (!(cpy[i] = (char *)malloc(sizeof(char) * 5)))
			msg_exit();
		cpy[i] = ft_strcpy(cpy[i], map[i]);
		i++;
	}
	new->ptr = cpy;
	new->next = NULL;
	return (new);
}

void	lst_push_back(t_lst **alst, t_lst *new)
{
	t_lst	*tmp;

	if (*alst)
	{
		tmp = *alst;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	else
		*alst = new;
}

char	**translate_tab(char **map, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if (map[i][j] == '#')
				map[i][j] = c;
			j++;
		}
		j = 0;
		i++;
	}
	return (map);
}

t_lst	*lst_translate(t_lst *alst)
{
	int		i;
	t_lst	*new;
	t_lst	*ptr;

	i = 0;
	ptr = alst;
	new = alst;
	while (new)
	{
		new->ptr = translate_tab(new->ptr, 'A' + i);
		new = new->next;
		i++;
	}
	return (ptr);
}
