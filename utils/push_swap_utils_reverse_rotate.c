/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_reverse_rotate.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameduboi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 22:23:13 by ameduboi          #+#    #+#             */
/*   Updated: 2025/02/17 22:23:18 by ameduboi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(t_pile **pile)
{
	t_pile	*tmp;

	tmp = *pile;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next->next = *pile;
	(*pile) = tmp->next;
	tmp->next = NULL;
}

void	rra(t_pile **pile_a)
{
	reverse_rotate(pile_a);
	ft_putstr("rra\n");
}

void	rrb(t_pile **pile_b)
{
	reverse_rotate(pile_b);
	ft_putstr("rrb\n");
}

void	rrr(t_pile **pile_a, t_pile **pile_b)
{
	reverse_rotate(pile_a);
	reverse_rotate(pile_b);
	ft_putstr("rrr\n");
}
