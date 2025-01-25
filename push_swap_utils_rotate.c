/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_rotate.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameduboi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 18:09:18 by ameduboi          #+#    #+#             */
/*   Updated: 2025/01/25 02:38:07 by ameduboi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list *pile_a)
{
	t_list	*new;

	ft_lstadd_back(&pile_a, &pile_a);
	pile_a = pile_a->next;
	new = ft_lstlast(pile_a);
	new->next = NULL;
}

void	rb(t_list *pile_b)
{
	t_list	*new;

	ft_lstadd_back(&pile_b, &pile_b);
	pile_b = pile_b->next;
	new = ft_lstlast(pile_b);
	new->next = NULL;
}

void	rr(t_list *pile_a, t_list *pile_b)
{
	ra(pile_a);
	rb(pile_b);
}
