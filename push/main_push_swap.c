/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 11:45:30 by cfavero           #+#    #+#             */
/*   Updated: 2018/04/27 16:45:06 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_all *data;

	if (ft_are_int(ac, av) != 0)
	{
		ft_printf("Error\n");
		return (-1);
	}
	ft_fill(ac, av, &data);
	if (ft_are_sorted_a_exval(data->lst_a) == 0)
		return (0);
	if (ft_errors(data->lst_a, ft_lstlen(data->lst_a)) != 0)
	{
		ft_printf("Error\n");
		return (-1);
	}
//	if (ft_checker(ac, av, data) != 1)
//		return (-1);
//	ft_try_a(data, ac / 2);
	// ft_print_stack(data->lst_a);
	ft_quicksort(data);
	ft_printf("");
	//ft_print_moves(data->lst_move);
	//data->lst_move = ft_cleaning_lst(data, data->lst_move);
	// ft_print_moves(data->lst_move);
	//ft_free_moves(data->lst_move);
//	ft_print_stack(data->lst_a);
	//ft_printf("-----------\n");s
//	ft_print_stack(data->lst_b);
	return (0);
}
