/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:18:35 by allespag          #+#    #+#             */
/*   Updated: 2018/12/03 18:22:06 by allespag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft/libft.h"

void	msg_exit(void)
{
	ft_putendl("error");
	exit(1);
}

char	**set_map(void)
{
	int		i;
	int		j;
	char	**map;

	i = 0;
	if (!(map = (char **)malloc(sizeof(char *) * 27)))
		msg_exit();
	while (i < 26)
	{
		j = 0;
		if (!(map[i] = (char *)malloc(sizeof(char) * 27)))
			msg_exit();
		while (j < 26)
		{
			map[i][j] = '.';
			j++;
		}
		map[i][j] = '\0';
		i++;
	}
	map[27] = 0;
	return (map);
}

void	backtracking(t_lst *head)
{
	char	**map;
	int		w;

	w = 2;
	head = lst_translate(head);
	if (!(map = set_map()))
		msg_exit();
	while (!(ft_find_solution(map, head, w)))
	{
		w++;
		big_free(map);
		map = set_map();
	}
	ft_display_tab(map, w, w);
	big_free(map);
	lst_free(head);
}

int		main(int ac, char **av)
{
	int		fd;
	t_lst	*head;
	char	**line;

	head = NULL;
	if (ac != 2)
		ft_putendl("usage: fillit : input_file");
	else
	{
		if (!(line = (char **)malloc(sizeof(char *) * 5)))
			msg_exit();
		fd = open(av[1], O_RDONLY);
		head = lf_error(head, fd, line, 1);
		if (!(head) || lst_len(head) > 26)
			msg_exit();
		else
			backtracking(head);
		close(fd);
		free(line);
		exit(EXIT_SUCCESS);
	}
	exit(EXIT_FAILURE);
}
