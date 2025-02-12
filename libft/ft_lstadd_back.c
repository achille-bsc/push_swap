/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:20:02 by ameduboi          #+#    #+#             */
/*   Updated: 2025/02/12 21:28:31 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_back(t_pile **lst, t_pile *new)
{
	t_pile	*temp;
	
	temp = *lst;
	if (!lst)
		return ;
	if (!(*lst))
		*lst = new;
	else
	{
		while (temp->next)
			temp= temp->next;
		temp->next = new;
		// new->next = NULL;
	}
}

