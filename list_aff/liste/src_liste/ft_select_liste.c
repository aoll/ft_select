/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_liste.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 18:39:45 by aollivie          #+#    #+#             */
/*   Updated: 2016/01/31 19:55:58 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_select_list.h"

static t_liste	*ft_liste_new(const char *s)
{
	t_liste *n;

	if (!(n = malloc(sizeof(t_liste))))
		return (NULL);
	n->i_length = (int)ft_strlen(s);
	n->i_etat = 0;
	n->i_start = 0;
	n->s_name = ft_strdup(s);
	n->n = NULL;
	n->p = NULL;
	return (n);
}

static void		ft_liste_add(t_liste **liste, t_liste *n)
{
	t_liste *l;

	l = *liste;
	while (l->n)
		l = l->n;
	l->n = n;
	n->p = l;
	return ;
}

static void		ft_liste(t_liste **liste, const char *s)
{
	if (*liste == NULL)
	{
		*liste = ft_liste_new(s);
		return ;
	}
	ft_liste_add(liste, ft_liste_new(s));
	return ;
}

t_liste			*ft_select_liste(const int ac, const char **tab)
{
	t_liste		*liste;
	int			i_x;

	liste = NULL;
	i_x = 0;
	while (i_x < ac)
	{
		ft_liste(&liste, tab[i_x]);
		if (i_x == 0)
		{
			liste->i_etat = 2;
			liste->i_start = 1;
		}
		else if (i_x == (ac - 1))
			liste->i_start = 2;
		i_x++;
	}
	return (liste);
}
