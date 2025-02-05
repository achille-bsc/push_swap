/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_swap.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameduboi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 18:29:40 by ameduboi          #+#    #+#             */
/*   Updated: 2025/01/18 18:34:45 by ameduboi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_pile **pile_a, int a)
{
	int	temp;

	temp = (*pile_a)->data;
	(*pile_a)->data = (*pile_a)->next->data;
	(*pile_a)->next->data = temp;
	if (a)
		write(1, "sa\n", 3);
}

void	sb(t_pile **pile_b, int a)
{
	int     temp;

	temp = (*pile_b)->data;
	(*pile_b)->data = (*pile_b)->next->data;
	(*pile_b)->next->data = temp;
	if (a)
		write(1, "sb\n", 3);
}

void	ss(t_pile **pile_a, t_pile **pile_b)
{
	sa(pile_a, 0);
	sb(pile_b, 0);
	write(1, "ss\n", 3);
}
