/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:20:46 by allespag          #+#    #+#             */
/*   Updated: 2018/12/03 18:13:12 by jallen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft/libft.h"

int			check_char(char **line)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	count = 0;
	while (line[i])
	{
		while (line[i][j])
		{
			if (line[i][j] != '#' && line[i][j] != '.')
				msg_exit();
			if (line[i][j] == '#')
				count++;
			j++;
		}
		if (j != 4)
			return (0);
		j = 0;
		i++;
	}
	if (i > 4 || count != 4)
		msg_exit();
	return (1);
}

char		**normalize_form(char **line, t_point *min)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (line[i])
	{
		while (line[i][j])
		{
			if (line[i][j] == '#')
			{
				line[i][j] = '.';
				line[i - min->x][j - min->y] = '#';
			}
			j++;
		}
		j = 0;
		i++;
	}
	free(min);
	return (line);
}

char		**init_normalize(char **line)
{
	int			i;
	int			j;
	t_point		*min;

	i = 0;
	j = 0;
	if (!(min = (t_point *)malloc(sizeof(t_point))))
		msg_exit();
	min->x = 3;
	min->y = 3;
	while (line[i])
	{
		while (line[i][j])
		{
			if (line[i][j] == '#')
			{
				min->x = ((min->x) > i) ? i : (min->x);
				min->y = ((min->y) > j) ? j : (min->y);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (normalize_form(line, min));
}

int			check_form(char **line)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	count = 0;
	while (line[i])
	{
		j = 0;
		while (line[i][j])
		{
			if (line[i][j] == '#')
			{
				count = (i != 0 && line[i - 1][j] == '#') ? count + 1 : count;
				count = (i != 3 && line[i + 1][j] == '#') ? count + 1 : count;
				count = (j != 0 && line[i][j - 1] == '#') ? count + 1 : count;
				count = (j != 3 && line[i][j + 1] == '#') ? count + 1 : count;
			}
			j++;
		}
		i++;
	}
	return ((count == 6 || count == 8) ? 1 : 0);
}

t_lst		*lf_error(t_lst *lst, const int fd, char **line, int ret)
{
	int			i;

	while (ret == 1)
	{
		i = 0;
		while (i < 4)
		{
			ret = get_next_line(fd, &line[i]);
			if (ret != 1)
				msg_exit();
			i++;
		}
		line[i] = 0;
		line = init_normalize(line);
		if (check_char(line) && check_form(line))
		{
			lst_push_back(&lst, lst_new_node(line));
			free_lines(line);
		}
		else
			msg_exit();
		ret = get_next_line(fd, &line[0]);
		ft_ret(ret, line);
	}
	return (lst);
}
