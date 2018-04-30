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

int		ft_solve_a(t_all *data)
{
	int	moves;

	moves = 0;
	while (ft_are_sorted_a_val(data->lst_a) == 1)
	{
		if (AA > AB )
		{
			SA;
			ft_lstadd_end(&data->lst_move, NULL, "sa\n");
			//write(1, "sa\n", 3);
		}
		else
		{
			RA;
			ft_lstadd_end(&data->lst_move, NULL, "ra\n");
			//write(1, "ra\n", 3);
			if (AA > AB )
			{
				SA;
				ft_lstadd_end(&data->lst_move, NULL, "sa\n");
				//write(1, "sa\n", 3);
			}
			RRA;
			ft_lstadd_end(&data->lst_move, NULL, "rra\n");
			//write(1, "rra\n", 4);
		}
	}
	return (0);
}

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
			ft_lstadd_end(&data->lst_move, NULL, "pa\n");
			//write(1, "pa\n", 3);
			moves++;
		}
		else
		{
			RB;
			ft_lstadd_end(&data->lst_move, NULL, "rb\n");
			//write(1, "rb\n", 3);
			back++;
		}
	}
	*max = back;
	while (back--)
	{
		RRB;
		ft_lstadd_end(&data->lst_move, NULL, "rrb\n");
		//write(1, "rrb\n", 4);
	}
	return (moves);
}

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
			ft_lstadd_end(&data->lst_move, NULL, "pb\n");
			//write(1, "pb\n", 3);
			moves++;
		}
			else
		{
			RA;
			ft_lstadd_end(&data->lst_move, NULL, "ra\n");
			//write(1, "ra\n", 3);
			back++;
		}
	}
	while (back--)
	{
		RRA;
		ft_lstadd_end(&data->lst_move, NULL, "rra\n");
		//write(1, "rra\n", 4);
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
