/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_force_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 23:45:48 by abosc             #+#    #+#             */
/*   Updated: 2025/02/15 01:25:03 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	three_sort(t_pile *pile_a)
{
	if (pile_a->index > pile_a->next->index)
	{
		if (pile_a->next->index > pile_a->next->next->index)
		{
			if (pile_a->index > pile_a->next->next->index)
			{
				ra(&pile_a);
				sa(&pile_a);
			}
			else
				rra(&pile_a);
		}
		else
		{
			if (pile_a->index > pile_a->next->next->index)
				ra(&pile_a);
			else
				sa(&pile_a);
		}
	}
	else
		three_sort2(pile_a);
}

void	three_sort2(t_pile *pile_a)
{
	if (pile_a->next->index > pile_a->next->next->index)
	{
		if (pile_a->index > pile_a->next->next->index)
			rra(&pile_a);
		else
		{
			ra(&pile_a);
			sa(&pile_a);
			rra(&pile_a);
		}
	}
	else
	{
		if (pile_a->index > pile_a->next->next->index)
			sa(&pile_a);
	}
}

void	four_sort(t_pile *pile_a, t_pile *pile_b)
{
	t_list	*min;

	min = NULL;
	
	pb(pile_a, pile_b);
	three_sort(pile_a);
}

void	sort_five(t_pile *pile)
{
	if (lst_is_sorted(pile_a, 1) == 1)
		return ;
	ps_pb(pile);
	sort_four(d);
	if (get_b(d, 1) > get_a(d, 4))
		return (ps_pa(d), (void)ps_ra(d));
	else if (get_b(d, 1) < get_a(d, 1))
		return ((void)ps_pa(d));
	else if (get_b(d, 1) > get_a(d, 1) && get_b(d, 1) < get_a(d, 2))
		return (ps_pa(d), (void)ps_sa(d));
	else if (get_b(d, 1) > get_a(d, 2) && get_b(d, 1) < get_a(d, 3))
		return (ps_ra(d), ps_pa(d), ps_sa(d), (void)ps_rra(d));
	else
		return (ps_rra(d), ps_pa(d), ps_ra(d), (void)ps_ra(d));
}
