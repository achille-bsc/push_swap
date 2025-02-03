/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_push.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameduboi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:51:49 by ameduboi          #+#    #+#             */
/*   Updated: 2025/01/18 18:59:45 by ameduboi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    pa(t_list *pile_a, t_list *pile_b)
{
	t_list	*temp;

	temp = pile_b->next;
	pile_b->next = pile_a;
	pile_b = temp;
}

void	pb(t_list *pile_a, t_list *pile_b)
{
	t_list	*temp;

	temp = pile_a->next;
	pile_a->next = pile_b;
	pile_a = temp;
}
