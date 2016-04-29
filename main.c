/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/23 06:54:20 by dmoureu-          #+#    #+#             */
/*   Updated: 2016/04/29 08:09:07 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int		main(int ac, char **av)
{
	t_li	*lemin;
	t_ant *ant;
	int		coup;
	(void)ac;
	(void)av;
	lemin = new_lem_in();
	ft_printf("???\n");
	readlemin(lemin);
	ft_printf("???\n");
	spore(lemin);
	//view(lemin);
	ft_printf("???\n");
	//sleep(10);
	coup = 0;
	while (get_nb_ant_on_room(lemin, lemin->end) != lemin->ant)
	{
		ant = lemin->ants;
		while (ant)
		{
			//ft_printf("%p", ant->room);
			ant = ant->next;
		}
		ants_move(lemin);
		coup++;
		view(lemin);
		usleep(10000);
	}
	ft_printf("nb coup :%d\n", coup);
	return (0);
}
