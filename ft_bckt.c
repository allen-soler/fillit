/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bckt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:11:59 by jallen            #+#    #+#             */
/*   Updated: 2018/11/29 20:53:16 by jallen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_is_safe(char **map, char **ptr, int width, t_point pos)
{
	int	counter;
	int	x;
	int	y;

	counter = 0;
	y = 0;
	while (y < 4 && pos.y + y < width)
	{
		x = 0;
		while (x < 4 && pos.x + x < width)
		{
			if (map[pos.y + y][pos.x + x] == '.' && ptr[y][x] != '.')
				counter++;
			x++;
		}
		y++;
	}
	return (counter == 4 ? 1 : 0);
}

void	ft_put_b(char **map, char **ptr, t_point pos)
{
	int	x;
	int	y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (ptr[y][x] != '.')
				map[pos.y + y][pos.x + x] = ptr[y][x];
			x++;
		}
		y++;
	}
}

void	ft_remove_b(char **map, char **ptr, t_point pos)
{
	int	x;
	int	y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (ptr[y][x] != '.')
				map[pos.y + y][pos.x + x] = '.';
			x++;
		}
		y++;
	}
}

int		ft_find_solution(char **map, t_lst *piezas, int w)
{
	t_point pos;

	pos.y = 0;
	if (!piezas)
		return (1);
	while (pos.y < w)
	{
		pos.x = 0;
		while (pos.x < w)
		{
			if (ft_is_safe(map, piezas->ptr, w, pos))
			{
				ft_put_b(map, piezas->ptr, pos);
				if (ft_find_solution(map, piezas->next, w))
					return (1);
				ft_remove_b(map, piezas->ptr, pos);
			}
			pos.x++;
		}
		pos.y++;
	}
	return (0);
}
