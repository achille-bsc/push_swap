/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_push.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:51:49 by ameduboi          #+#    #+#             */
/*   Updated: 2025/02/11 21:39:57 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    pa(t_pile **pile_a, t_pile **pile_b)
{
	t_pile	*temp;

	temp = (*pile_b)->next;
	(*pile_b)->next = *pile_a;
	*pile_b = temp;
	write(1, "pa\n", 3);
}

void	pb(t_pile **pile_a, t_pile **pile_b)
{
	t_pile	*temp;

	temp = (*pile_a)->next;
	(*pile_a)->next = *pile_b;
	*pile_a = temp;
	write(1, "pb\n", 3);
}
