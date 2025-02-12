/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_rotate.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 18:09:18 by ameduboi          #+#    #+#             */
/*   Updated: 2025/02/11 23:44:54 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_pile **pile_a, int a)
{
	t_pile	*new;

	new = ft_lstlast(*pile_a);
	ft_lstadd_back(pile_a, *pile_a);
	(*pile_a) = (*pile_a)->next;
	new->next = NULL;
	if (a)
		write(1, "ra\n", 3);
}

void	rb(t_pile **pile_b, int a)
{
	t_pile	*new;

	ft_lstadd_back(pile_b, *pile_b);
	(*pile_b) = (*pile_b)->next;
	new = ft_lstlast(*pile_b);
	new->next = NULL;
	if (a)
		write(1, "rb\n", 3);
}

void	rr(t_pile **pile_a, t_pile **pile_b)
{
	ra(pile_a, 0);
	rb(pile_b, 0);
	write(1, "rr\n", 3);
}
