/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameduboi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 22:20:45 by ameduboi          #+#    #+#             */
/*   Updated: 2025/02/17 22:20:47 by ameduboi         ###   ########.fr       */
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
