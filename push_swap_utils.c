/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameduboi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 18:29:40 by ameduboi          #+#    #+#             */
/*   Updated: 2025/01/15 19:46:20 by ameduboi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list pile_a)
{
	t_list	temp;

	temp = pile_a;
	pile_a = pile_a->next;
	pile_a->next = temp;
}

void	sb(t_list pile_b)
{
	t_list	temp;

	temp = pile_b;
	pile_b = pile_b->next;
	pile_b->next = temp;
}

void	ss(t_list pile_a, t_list pile_b)
{
	sa(pile_a);
	sb(pile_b);
}

void	pa(t_list pile_a, t_list pile_b)
{
	
}
