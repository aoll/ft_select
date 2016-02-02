/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_config_liste.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 09:45:24 by aollivie          #+#    #+#             */
/*   Updated: 2016/02/01 12:12:47 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SELECT_TREE_COL_H
#define FT_SELECT_TREE_COL_H

#include "../../../libft/libft.h"
#include "ft_select_config_liste.h"
#include <sys/ioctl.h>
#include <termios.h>

typedef struct s_tree_col	t_tree_col;
struct	s_tree_col
{
    t_liste **ptr_tab;
    t_liste *ptr_curseur;
};

t_tree_col      *ft_select_tree_col_new(t_liste **liste, const t_config_liste *t_c_l);
void		ft_select_tree_print(const t_liste **ptr_tab, const t_config_liste *t_c_l);
//int					ft_select_config_init(t_tree_col **t_t_l);

//int		    ft_select_config_free(t_tree_col **t_t_l);
#endif
