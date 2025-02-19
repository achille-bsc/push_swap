/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 18:25:23 by abosc             #+#    #+#             */
/*   Updated: 2025/02/19 00:56:42 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	sort(t_pile **pile_a, t_pile **pile_b, int i)
{
	int	len;
	int	pile_a_len;

	pile_a_len = ft_lstsize(*pile_a);
	while (++i < (int)(sizeof(int) * 8))
	{
		if (is_sorted(pile_a) == 1)
			break ;
		len = ft_lstsize(*pile_a) + 1;
		while (--len)
		{
			if (is_sorted(pile_a) && is_sorted_rev(pile_b))
				break ;
			if (!((((*pile_a)->index) >> i) & 1))
				pb(pile_a, pile_b);
			else
				ra(pile_a);
		}
		len = ft_lstsize(*pile_b) + 1;
		while (--len)
		{
			if (pile_a_len >= 100 && (!((((*pile_b)->index) >> (i + 1)) & 1) && !is_sorted(pile_a)))
				rb(pile_b);
			else
				pa(pile_a, pile_b);
		}
	}
}

int	is_sorted(t_pile **pile_a)
{
	unsigned int	previous;
	t_pile			*temp;

	temp = *pile_a;
	previous = 0;
	while (temp)
	{
		if (previous > temp->index)
			return (0);
		previous = temp->index;
		temp = temp->next;
	}
	return (1);
}

int	is_sorted_rev(t_pile **pile_a)
{
	unsigned int	previous;
	t_pile			*temp;

	temp = *pile_a;
	previous = 10000;
	while (temp)
	{
		if (previous < temp->index)
			return (0);
		previous = temp->index;
		temp = temp->next;
	}
	return (1);
}

void	indexing(t_pile **pile_a)
{
	t_pile	*temp;
	t_pile	*temp_max;
	int		i;
	int		max;

	i = ft_lstsize(*pile_a);
	temp_max = *pile_a;
	while (i >= 1)
	{
		max = -2147483648;
		temp = *pile_a;
		while (temp)
		{
			if (temp->data > max && temp->index == 0)
			{
				max = temp->data;
				temp_max = temp;
			}
			temp = temp->next;
		}
		temp_max->index = i;
		i--;
	}
}
