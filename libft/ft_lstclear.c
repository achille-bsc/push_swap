/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:31:44 by ameduboi          #+#    #+#             */
/*   Updated: 2025/02/16 10:33:21 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstclear(t_pile **lst)
{
	t_pile	*temp;

	while ((*lst)->next)
	{
		temp = (*lst)->next;
		free(*lst);
		*lst = temp;
	}
	free(*lst);
	lst = NULL;
}
