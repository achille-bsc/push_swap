/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_get_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 20:25:04 by abosc             #+#    #+#             */
/*   Updated: 2025/02/19 21:58:47 by abosc            ###   ########.fr       */
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
