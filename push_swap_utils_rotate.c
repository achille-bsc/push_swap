/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_rotate.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameduboi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 18:09:18 by ameduboi          #+#    #+#             */
/*   Updated: 2025/01/22 00:41:25 by ameduboi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list *pile_a)
{
	t_list	*new;

	new->i = pile_a;
	ft_lstadd_back(&pile_a, new);
}

void	rb(t_list *pile_b)
{
	t_list	*new;

	new->i = pile_b;
	ft_lstadd_back(&pile_b, new);
}

void	rr(t_list *pile_a, t_list *pile_b)
{
	ra(pile_a);
	rb(pile_b);
}
