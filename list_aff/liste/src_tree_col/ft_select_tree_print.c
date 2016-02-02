#include "../inc/ft_select_tree_col.h"

void	ft_select_tree_print(const t_liste **ptr_tab, const t_config_liste *t_c_l)
{
    int ck;
    int i;
    int x;

    ck = 0;
    i = 0;
    x = 0;
    while (i < t_c_l->i_nb_ligne_col)
	{
	    x = 0;
	    while (x < t_c_l->i_nb_col)
	       	{
		    if (ptr_tab[x]->si_end == 1)
			{
			    if (ck == 0)
				ft_putstr(ptr_tab[x]->s_name);
			    ft_putstr("     ");
			    ck = 1;
			}
		    else
			{
			    ft_putstr(ptr_tab[x]->s_name);
			    ft_putstr("     ");
			    ptr_tab[x] = ptr_tab[x]->n;
			}
		    x++;
      		}
	    ft_putstr("\n");
	    i++;
	}
    return ;
}
