/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_push.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:51:49 by abosc             #+#    #+#             */
/*   Updated: 2025/02/19 21:58:50 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_pile **pile_from, t_pile **pile_to)
{
	t_pile	*tmp;

	if (!*pile_from)
		return ;
	tmp = (*pile_from)->next;
	(*pile_from)->next = *pile_to;
	*pile_to = *pile_from;
	*pile_from = tmp;
}

void	pa(t_pile **pile_a, t_pile **pile_b)
{
	push(pile_b, pile_a);
	ft_putstr("pa\n");
}

void	pb(t_pile **pile_a, t_pile **pile_b)
{
	push(pile_a, pile_b);
	ft_putstr("pb\n");
}
