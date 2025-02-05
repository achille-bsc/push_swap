/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_reverse_rotate.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameduboi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 18:18:15 by ameduboi          #+#    #+#             */
/*   Updated: 2025/01/25 03:27:41 by ameduboi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_pile **pile_a, int a)
{
	t_pile	*new;
	t_pile	*yes;

	new = ft_lstlast(*pile_a);
	// new->next = *pile_a;
	ft_lstadd_front(pile_a, new);
	yes = pile_a;
	while (yes->next->next)
		yes = (*pile_a)->next;
	yes->next = NULL;
	if (a)
		write(1, "rra\n", 4);
}

void	rrb(t_pile **pile_b, int a)
{
	t_pile	*new;
	t_pile	*yes;

	new = ft_lstlast(*pile_b);
	new->next = *pile_b;
	ft_lstadd_front(pile_b, new);
	while (yes->next->next)
		yes = (*pile_b)->next;
	yes->next = NULL;
	if (a)
		write(1, "rrb\n", 4);
}

void	rrr(t_pile **pile_a, t_pile **pile_b)
{
	rra(pile_a, 0);
	rrb(pile_b, 0);
	write(1, "rrr\n", 4);
}
