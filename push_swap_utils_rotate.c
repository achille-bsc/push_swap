/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_rotate.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameduboi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 18:09:18 by ameduboi          #+#    #+#             */
/*   Updated: 2025/01/18 20:30:22 by ameduboi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list *pile_a)
{
	t_list	*temp;

	temp = pile_a->next;
	
	int	temp;

	temp = pile_a->i;
	while (pile_a->next->i)
		pile_a->i = pile_a->next->i;
	pile_a->i = temp;
}

void	rb(t_list *pile_b)
{
	int	temp;

	temp = pile_b->i;
	while (pile_b->next->i)
		pile_b->i = pile_b->next->i;
	pile_b->i = temp;
}

void	rr(t_list *pile_a, t_list *pile_b)
{
	ra(pile_a);
	rb(pile_b);
}
