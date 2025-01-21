/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_reverse_rotate.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameduboi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 18:18:15 by ameduboi          #+#    #+#             */
/*   Updated: 2025/01/22 00:15:09 by ameduboi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list *pile_a)
{
	t_list	*new;

	new = ft_lstlast(pile_a);
	ft_lstadd_front(&pile_a, new);
}

void	rrb(t_list *pile_b)
{
	t_list	*new;

	new = ft_lstlast(pile_b);
	ft_lstadd_front(&pile_b, new);
}

void	rrr(t_list *pile_a, t_list *pile_b)
{
	rra(pile_a);
	rrb(pile_b);
}
