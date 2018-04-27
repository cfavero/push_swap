/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_alg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 13:27:34 by cfavero           #+#    #+#             */
/*   Updated: 2018/04/26 18:15:04 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// we use it
/*
int		ft_move_on_b(t_all *data, int middle, int max)
{
	int	moves;

	moves = 0;
	if (AA < middle || max < 2)
	{
		PB;
		ft_printf("pb\n");
		moves++;
	}
	else if (AA > AB)
	{
		SA;
		ft_printf("sa\n");
	}
	else
	{
		RA;
		ft_printf("ra-move_on_b\n");
	}
	return (moves);
}

// we use it

int		ft_move_on_a(t_all *data, int middle)
{
	int	moves;

	moves = 0;
	if (BA > middle)
	{
		PA;
		ft_printf("pa\n");
		moves = 1;
	}
	else
	{
		RB;
		ft_printf("rb\n");
	}
	return (moves);
}
*/
/*int		ft_find_place(t_lst *lst)
{
	int		k;
	int		val;
	t_lst	*tmp;

	k = 2;
	tmp = lst;
	val = lst->val;
	lst = lst->next->next;
	while (lst != tmp)
	{
		//		ft_printf("val : %d, prev : %d, next : %d", val, lst->prev->val, lst->next->val);
		if (val < lst->prev->val && val > lst->next->val)
			return (k);
		else
		{
			k++;
			lst = lst->next;
		}
	}
	return (k);
}*/

/*static int	ft_push_order(t_all *data, int half, int middle)
{
	int		k;

	k = ft_find_place(data->lst_b);
	//	ft_printf("position : %d\n", k);
	if (BA < BB)
	{
		if (k < half)
		{
			if (AA > middle && AA > AB)
			{
				SS;
				ft_printf("ss\n");
			}
			else
			{
				SB;
				ft_printf("sb\n");
			}
		}
		else
		{
			if (AA > middle && AA < AB)
			{
				RR;
				ft_printf("rr\n");
			}
			else
			{
				RB;
				ft_printf("rb\n");
			}
		}
	}
	return (half);
}*/

/*static int	ft_solve_prova(t_all *data, int half)
{
	int k;

	while (ft_are_sorted_b(data->lst_b) == 1)
	{
		k = ft_find_place(data->lst_b);
	//	ft_print_stack(data->lst_a);
		if (BA > BB && (k <= half || half < 3))
		{
			SB;
			ft_printf("sb\n");
		}
		else
		{
			RB;
			ft_printf("rb\n");
		}
	}
	return (0);
}*/

/*static int	ft_check_push(t_all *data, int middle, int y)
{
	if (AA < middle)
	{
		PB;
		ft_printf("pb\n");
		y++;
	//	ft_print_stack(data->lst_b);
//		ft_push_order(data, (y / 2), middle);
	//	ft_solve_prova(data, (y / 2));
	}
	else if (AA > AB)
	{
		SA;
		ft_printf("sa\n");
	}
	else
	{
		RA;
		ft_printf("ra\n");
	}
	//	ft_printf("y: %d, middle: %d\n", y, middle);
	//	ft_print_stack(data->lst_a);
	return (y);
}*/

int			ft_sorting_alg(t_all *data, int ac)
{
	int		y;
	int		i;
	int		max;
	int		try;
	int		middle;

	y = 2;
	i = 2;
	ac = ft_lstlen(data->lst_a) - 1;
	middle = ft_find_middle(data->lst_a, 0, ac);
	//	ft_printf("middle : %d\n", middle);
	if (ft_are_sorted_a(data->lst_a) == 0)
		return (0);
/*	while (!(data->lst_b))
		ft_move_b(data, middle);
	while (!(data->lst_b->next))
		ft_move_b(data, middle);
//	ft_printf("Prec\n");
	ft_push_order(data, (y / i), middle);
	max = (ac / 2) - ((ac % 2) == 0 ? 1 : 0);
	//ft_print_stack(data->lst_b);
	while (y < max)
		y = ft_check_push(data, middle, y);
//	ft_printf("new\n");
	while ((try = ft_try_a(data, ((ac - y) / 2))) == 0)
	{
		i = ac - y;
		max = ((i / 2) + y);
		(i % 2) == 0 ? max-- : max;
//		ft_printf("buu\n");
		middle = ft_errors(data->lst_a, ac - y);
//		ft_printf("boh\n");
		while (y < max)
			y = ft_check_push(data, middle, y);
	}
//	ft_printf("1\n");
	ft_solve_a(data, (ac - y) / 2);
//	ft_printf("2\n");
	ft_solve_a(data, (ac - y) / 2);
//	ft_printf("3\n");
	while (data->lst_b->next)
	{
//		y = 0;
//		if (ft_are_sorted_a(data->lst_a) == 0)
				ft_solve_b(data);
//		else
//		{
			
		//	while (y++ < 10)
		//		ft_solve_b(data);
		//	ft_check_push();
//		}
		//	ft_sort(data);
	}
//	if (ft_are_sorted_a(data->lst_a) == 1)
//		ft_sort(data);
	ft_solve_b(data);
//	ft_print_stack(data->lst_b);
	//ft_print_stack(data->lst_a);
*/	return (0);
}
