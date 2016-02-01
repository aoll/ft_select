/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_config_init.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 12:05:47 by aollivie          #+#    #+#             */
/*   Updated: 2016/02/01 12:22:45 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_select_config_liste.h"

int			ft_select_config_init(t_config_liste **t_c_l, const t_liste *liste)
{
	t_config_liste	*t;

	t = *t_c_l;
	if (t->si_x_term < t->i_l_str_max)
		return (0);
	if (t->si_y_term >= t->i_nb_liste)
	{
		t->i_nb_col = 1;
		t->i_nb_ligne_col = t->i_nb_liste;
		t->i_nb_col_aff = 1;
		t->i_index_col_aff = 0;
		return (0);
	}
	return (1);
}
