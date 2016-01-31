/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_liste_free.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 19:49:41 by aollivie          #+#    #+#             */
/*   Updated: 2016/01/31 19:54:59 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_select_list.h"

static void	ft_liste_free(t_liste **liste)
{
	t_liste *l;

	l = *liste;
	if (l->p != NULL)
	{
		free(l->p->s_name);
		l->p->s_name = NULL;
		free(l->p);
		l->p = NULL;
	}
	return ;
}

void		ft_select_liste_free(t_liste **liste)
{
	t_liste *l;

	l = *liste;
	while (l->n)
	{
		ft_liste_free(&l);
		l = l->n;
	}
	if (l->p != NULL)
	{
		free(l->p->s_name);
		l->p->s_name = NULL;
		free(l->p);
		l->p = NULL;
	}
	free(l->s_name);
	l->s_name = NULL;
	free(l);
	l = NULL;
	return ;
}
