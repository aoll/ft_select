/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_list.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 17:37:44 by aollivie          #+#    #+#             */
/*   Updated: 2016/01/31 19:37:44 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SELECT_LIST_H
#define FT_SELECT_LIST_H

#include "../../libft/libft.h"

typedef struct s_liste	t_liste;
struct	s_liste
{
	int		i_length;
	int		i_etat;
	int		i_start;
	char	_pa[4];
	char	*s_name;
	t_liste	*n;
	t_liste	*p;
};

t_liste		*ft_select_liste(const int ac, const char **tab);
void		ft_select_liste_free(t_liste **liste);

#endif
