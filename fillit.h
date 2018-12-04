/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allespag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 13:26:54 by allespag          #+#    #+#             */
/*   Updated: 2018/12/03 18:12:15 by jallen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft/libft.h"

typedef struct		s_point
{
	int				x;
	int				y;
}					t_point;

typedef struct		s_lst
{
	char			**ptr;
	struct s_lst	*next;
}					t_lst;

int					check_char(char **line);
char				**normalize_form(char **line, t_point *min);
char				**init_normalize(char **line);
int					check_form(char **line);
t_lst				*lf_error(t_lst *lst, const int fd, char **line, int ret);

t_lst				*lst_new_node(char **map);
int					lst_len(t_lst *alst);
void				lst_push_back(t_lst **alst, t_lst *new);
char				**translate_tab(char **map, char c);
t_lst				*lst_translate(t_lst *alst);

int					ft_find_solution(char **map, t_lst *piezas, int w);
void				msg_exit(void);
void				big_free(char **map);
void				lst_free(t_lst *alst);
void				free_lines(char **map);
void				ft_ret(int ret, char **line);

#endif
