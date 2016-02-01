/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 17:39:54 by aollivie          #+#    #+#             */
/*   Updated: 2016/02/01 12:09:51 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_select_liste.h"
#include "../ft_select_config_liste.h"

int	main(int ac, char **av)
{
	t_liste			*l;
	t_config_liste	*c_l;

	if ((l = ft_select_liste((const int)(ac - 1),\
						(const char **)(++av))) == NULL)
		return (0);
	c_l = ft_select_config_liste_new((const t_liste*)(l));
	ft_select_liste_free(&l);
	printf("align %zu\n", sizeof(t_liste));
	ft_putstr("HELLO\n");
	return (0);
}
