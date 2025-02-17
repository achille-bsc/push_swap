/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:44:35 by ameduboi          #+#    #+#             */
/*   Updated: 2025/02/17 17:47:51 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_pile	*ft_lstnew(int data)
{
	t_pile	*new;

	new = (t_pile *)malloc(sizeof(t_pile));
	if (!new)
		return (NULL);
	new->data = (long)data;
	new->index = 0;
	new->next = NULL;
	return (new);
}
