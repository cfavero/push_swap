/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 15:09:46 by cfavero           #+#    #+#             */
/*   Updated: 2018/04/27 16:51:36 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			*ft_get_arr(t_lst *a, int len)
{
	int		*arr;
	int		i;
	t_lst	*temp;

	i = 0;
	temp = a;
	if (!(arr = malloc(sizeof(int) * len)))
		return (NULL);
	arr[i] = a->val;
	a = a->next;
	while (len--)
	{
		i++;
		arr[i] = a->val;
		a = a->next;
	}
	return (arr);
}

int			ft_lstlen(t_lst *lst)
{
	int		i;
	t_lst	*tmp;

	i = 1;
	tmp = lst;
	while (lst->next != tmp)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

int			ft_find_middle(t_lst *lst, int k, int len)
{
	int		val;
	int		more;
	int		less;
	int		i;
	int		*arr;

	if (len == 0)
		len = ft_lstlen(lst);
	arr = ft_get_arr(lst, len);
	k = len;
	while (k--)
	{
		i = 0;
		more = 0;
		less = 0;
		val = arr[k];
		while (i < len)
		{
			if (val < arr[i])
				more++;
			else
				less++;
			i++;
		}
		if (more - less == 0 || (len % 2 == 1 && more - less == 1))
			return (val);
	}
	return (val);
}

/*int			ft_are_sorted_b(t_lst *lst)
{
	t_lst	*tmp;

	tmp = lst->prev;
	while (lst != tmp)
	{
		if (lst->val > lst->next->val)
			lst = lst->next;
		else
			return (1);
	}
	if (lst->val > lst->prev->val)
		return (1);
	return (0);
}*/

int			ft_are_sorted_a(t_lst *lst)
{
	t_lst	*tmp;

	tmp = lst->prev;
	while (lst != tmp)
	{
		if (lst->val == (lst->next->val - 1))
			lst = lst->next;
		else
			return (1);
	}
//	if (lst->val != (lst->next->val + 1))
//		return (1);
	return (0);
}
