/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 17:39:54 by aollivie          #+#    #+#             */
/*   Updated: 2016/01/31 19:54:28 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_select_list.h"

int	main(int ac, char **av)
{
	t_liste *l;

	l = ft_select_liste((const int)ac, (const char **)av);
	ft_select_liste_free(&l);
	printf("align %zu\n", sizeof(t_liste));
	ft_putstr("HELLO\n");
	return (0);
}
