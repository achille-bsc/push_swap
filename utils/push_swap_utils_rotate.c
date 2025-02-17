/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_rotate.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 18:09:18 by ameduboi          #+#    #+#             */
/*   Updated: 2025/02/17 22:11:32 by ameduboi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_pile **pile)
{
	t_pile	*tmp;
	t_pile	*last;

	tmp = (*pile)->next;
	last = (*pile);
	while (last->next)
		last = last->next;
	last->next = (*pile);
	(*pile)->next = NULL;
	(*pile) = tmp;
}

void	ra(t_pile **pile_a)
{
	rotate(pile_a);
	ft_putstr("ra\n");
}

void	rb(t_pile **pile_b)
{
	rotate(pile_b);
	ft_putstr("rb\n");
}

void	rr(t_pile **pile_a, t_pile **pile_b)
{
	rotate(pile_a);
	rotate(pile_b);
	ft_putstr("rr\n");
}
