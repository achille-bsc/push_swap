/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_get_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameduboi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 22:22:54 by ameduboi          #+#    #+#             */
/*   Updated: 2025/02/17 22:22:56 by ameduboi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_pile	*lst_get_min(t_pile *pile_a)
{
	t_pile	*temp;
	t_pile	*min;

	temp = pile_a;
	min = temp;
	while (temp)
	{
		if (temp->index < min->index)
			min = temp;
		temp = temp->next;
	}
	return (min);
}
