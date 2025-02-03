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

#include "push_swap.h"

void	sa(t_list *pile_a)
{
	int	temp;

	temp = pile_a->i;
	pile_a->i = pile_a->next->i;
	pile_a->nex->i = temp;
}

void	sb(t_list *pile_b)
{
	int     temp;

	temp = pile_b->i;
	pile_b->i = pile_b->next->i;
	pile_b->next->i = temp;
}

void	ss(t_list *pile_a, t_list *pile_b)
{
	sa(pile_a);
	sb(pile_b);
}
