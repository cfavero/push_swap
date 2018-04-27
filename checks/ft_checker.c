/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 18:39:30 by cfavero           #+#    #+#             */
/*   Updated: 2018/04/27 16:47:10 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// checks that the numbers are differents

int		ft_errors(t_lst *a, int len)
{
	int		*arr;
	int		i;
	int		k;
	t_lst	*temp;

	i = 0;
	temp = a;
	if (!(arr = malloc(sizeof(int) * len)))
		return (-1);
	arr[i] = a->exval;
	a = a->next;
	while (a != temp)
	{
		k = 0;
		i++;
		arr[i] = a->exval;
		while (k < i)
		{
			arr[i] != arr[k] ? k++ : 0;
			if (arr[i] == arr[k] && i != k)
				return (-1);
		}
		a = a->next;
	}
	free(arr);
	return (0);
}

// checks values are ints
// NEED TO BE ABLE TO TAKE STRINGS
int		ft_are_int(int ac, char **av)
{
	int i;
	int k;

	i = 1;
	(void)av;
	while (i < ac)
	{
		k = 0;
		if (av[i][k] == '-')
			k++;
		while (ft_isdigit(av[i][k]) || av[i][k] == ' ' || (av[i][k] == '-' &&
				av[i][k - 1] == ' ' && ft_isdigit(av[i][k + 1])))
			k++;
		if (av[i][k])
			return (1);
		if (ft_atoll(av[i]) > INT_MAX)
			return (1);
		if (ft_atoll(av[i]) < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

int		ft_take_com(char *com, t_all *data)
{
	while (get_next_line(0, &com))
	{
		if (ft_strequ("sa", com) == 1)
			SA;
		else if (ft_strequ("sb", com) == 1)
			SB;
		else if (ft_strequ("ss", com) == 1)
			SS;
		else if (ft_strequ("pa", com) == 1)
			PA;
		else if (ft_strequ("pb", com) == 1)
			PB;
		else if (ft_strequ("ra", com) == 1)
			RA;
		else if (ft_strequ("rb", com) == 1)
			RB;
		else if (ft_strequ("rr", com) == 1)
			RR;
		else if (ft_strequ("rra", com) == 1)
			RRA;
		else if (ft_strequ("rrb", com) == 1)
			RRB;
		else if (ft_strequ("rrr", com) == 1)
			RRR;
		else
			return (-1);
	}
	return (0);
}

int			ft_checker(int ac, char **av, t_all *data)
{
	int		i;
	char	*com;

	i = 0;
	(void)av;
	if (!(data->lst_a))
		return (0);
	if ((ft_are_int(ac, av)) == 1 || ft_errors(data->lst_a, ac) == -1)
	{
		ft_printf("Error\n");
		return (-1);
	}
	if (ft_take_com(com, data) == -1)
	{
		ft_printf("Error\n");
		return (-1);
	}
	if (ft_are_sorted_a(data->lst_a) && (data->lst_b == NULL))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	return (1);
}
