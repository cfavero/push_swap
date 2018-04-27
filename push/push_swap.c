/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 17:26:08 by cfavero           #+#    #+#             */
/*   Updated: 2018/04/27 16:51:17 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// we use it

int		ft_solve_a(t_all *data)
{
	int	moves;

	moves = 0;
	while (ft_are_sorted_a(data->lst_a) == 1)
	{
		if (AA > AB )
		{
			SA;
			ft_printf("sa\n");
		}
		else
		{
			RA;
			ft_printf("ra\n");
			if (AA > AB )
			{
				SA;
				ft_printf("sa\n");
			}
			RRA;
			ft_printf("rra\n");
		}
	}
	return (0);
}

// we use it

int		ft_move_on_a(t_all *data, int middle, int *max)
{
	int	moves;
	int	back;

	moves = 0;
	back = 0;
	while ((moves + back) < *max)
	{
		if (BA > middle)
		{
			PA;
			ft_printf("pa\n");
			moves++;
		}
		else
		{
			RB;
			ft_printf("rb\n");
			back++;
		}
	}
	*max = back;
	while (back--)
	{
		RRB;
		ft_printf("rrb\n");
	}
	return (moves);
}

// we use it

int		ft_move_on_b(t_all *data, int middle, int max, int elem)
{
	int	moves;
	int	back;

	moves = 0;
	back = 0;
	while (moves < max)
	{
		if (AA <= middle)
		{
			PB;
			ft_printf("pb\n");
			moves++;
		}
			else
		{
			RA;
			ft_printf("ra\n");
			back++;
		}
	}
	while (back--)
	{
		RRA;
		ft_printf("rra\n");
	}
	return (moves);
}

int		loop_spot(t_lst *a, int sv)
{
	t_lst	*tmp;
	int	x;

	x = 0;
	tmp = a;
	while (tmp->next != a)
	{
		if (sv > tmp->exval)
			x++;
		tmp = tmp->next;
	}
	if (sv > tmp->exval)
		x++;
	return (x);
}

t_lst	*change_lst(t_lst *a)
{
	t_lst       *tmp2;
	int         sv;
	int         x;

	tmp2 = a;
	x = 0;
	while (tmp2->next != a)
	{
		sv = tmp2->exval;
		x = loop_spot(a, sv);
		tmp2->val = x;
		tmp2 = tmp2->next;
	}
	sv = tmp2->exval;
	x = loop_spot(a, sv);
	tmp2->val = x;
	return (tmp2);
}
