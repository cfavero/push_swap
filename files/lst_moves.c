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
#include <stdio.h>

static t_moves	*ft_init_lst(char *s, t_moves *new)
{
	if (!(new = (t_moves*)malloc(sizeof(t_moves))))
		return (NULL);
	printf("---> %s\n", s);
	new->move = ft_strdup(s);
	printf("+++> %s\n", new->move);
	new->next = NULL;
	return (new);
}

void			ft_lstadd_end(t_moves **alst, t_moves *new, char *s)
{
    t_moves *tmp;
	static int	i = 0;

    new = ft_init_lst(s, new);
   //ft_printf("2 : %p\n", new->move);
    //free(s);
    //s = NULL;
	printf("---------\n%02d : %s", i++, new->move);
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
  /*  if (i >= 17)
    	ft_print_moves(*alst);
    ft_printf("--------\n");*/
    // ft_strdel(&s);
}

void	ft_free_moves(t_moves *lst)
{
	while (lst->next)
	{
		ft_strdel(&lst->move);
		free(lst);
		lst = lst->next;
	}
	ft_strdel(&lst->move);
	free(lst);
}
