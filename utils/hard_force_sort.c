/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_force_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 23:45:48 by abosc             #+#    #+#             */
/*   Updated: 2025/02/16 01:30:58 by abosc            ###   ########.fr       */
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
	t_pile	*min;
	t_pile	*temp;

	min = pile_a;
	temp = pile_a;
	while (temp)
	{
		if (min->index > temp->index)
			min = temp;
		temp = temp->next;
	}
	while (min->index != pile_a->index)
	{
		if (min->index == ft_lstlast(pile_a)->index)
			rra(&pile_a);
		else
			ra(&pile_a);
	}
	if (!is_sorted(&pile_a))
		pb(&pile_a, &pile_b);
	three_sort(pile_a);
	pa(&pile_a, &pile_b);
}
void	five_sort(t_pile *pile_a, t_pile *pile_b)
{
	t_pile	*min;
	t_pile	*temp1;

	min = pile_a;
	temp1 = pile_a;
	while (temp1)
	{
		if (min->index > temp1->index)
			min = temp1;
		temp1 = temp1->next;
	}
	while (min->index != pile_a->index)
	{
		if (min->index == ft_lstlast(pile_a)->index
			|| min->index == pile_a->next->next->next->index)
			rra(&pile_a);
		else
			ra(&pile_a);
	}
	if (!is_sorted(&pile_a))
		pb(&pile_a, &pile_b);
	four_sort(pile_a, pile_b);
	pa(&pile_a, &pile_b);
}
