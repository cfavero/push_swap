/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_moves.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 17:16:44 by cfavero           #+#    #+#             */
/*   Updated: 2018/04/28 17:16:46 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_moves	*ft_init_lst(char *s, t_moves *new)
{
	if (!(new = (t_moves*)malloc(sizeof(t_moves))))
		return (NULL);
	new->move = s;
	new->next = NULL;
	return (new);
}

void			ft_lstadd_end(t_moves **alst, t_moves *new, char *s)
{
    t_moves *tmp;

    new = ft_init_lst(s, new);
	if (*alst)
	{
		tmp = (*alst);
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
    else if (new)
    {
        if (!(*alst = (t_moves*)malloc(sizeof(t_moves))))
        	return ;
        *alst = new;
    }
}