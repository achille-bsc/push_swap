/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_swap.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameduboi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 22:23:35 by ameduboi          #+#    #+#             */
/*   Updated: 2025/02/17 22:23:41 by ameduboi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_pile **pile)
{
	t_pile	*tmp;

	tmp = (*pile)->next;
	(*pile)->next = tmp->next;
	tmp->next = (*pile);
	(*pile) = tmp;
}

void	sa(t_pile **pile_a)
{
	swap(pile_a);
	ft_putstr("sa\n");
}

void	sb(t_pile **pile_b)
{
	swap(pile_b);
	ft_putstr("sb\n");
}

void	ss(t_pile **pile_a, t_pile **pile_b)
{
	swap(pile_a);
	swap(pile_b);
	ft_putstr("ss\n");
}
