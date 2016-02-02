#include "../inc/ft_select_tree_col.h"

static void	ft_next_nb_col(t_liste **liste, int i_nb_l_col)
{
    int x;

    x = 0;
    while (x < i_nb_l_col)
	{
	    *liste = (*liste)->n;
	    x++;
	}
    return ;
}

static int	ft_tree_col_init_tab(t_liste ***ptr_tab, t_liste **liste, int i_nb_l_col, int i_nb_col)
{
    t_liste **tab;
    t_liste *l;
    int		x;

    
    tab = *ptr_tab;
    l = *liste;
    x = 0;
    while (x < i_nb_col)
	{
	    tab[x] = l;
	    ft_next_nb_col(&l, i_nb_l_col);
	    x++;
	}
    return (1);
}

t_tree_col	*ft_select_tree_col_new(t_liste **liste, const t_config_liste *t_c_l)
{
    t_tree_col *n;

    if (!(n = malloc(sizeof(t_tree_col))))
	return (NULL);
    if (!(n->ptr_tab = malloc(sizeof(t_c_l->i_nb_col + 1))))
	return (NULL);
    n->ptr_tab[t_c_l->i_nb_col] = NULL;
    ft_tree_col_init_tab(&n->ptr_tab, liste, t_c_l->i_nb_ligne_col, t_c_l->i_nb_col);
    n->ptr_curseur = *liste;
    return (n);
}
