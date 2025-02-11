/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:31:44 by ameduboi          #+#    #+#             */
/*   Updated: 2025/02/11 22:36:23 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstclear(t_pile **lst, void (*del)(void *))
{
	t_pile	*temp;

	while ((*lst)->next)
	{
		(*del)(((*lst)->data));
		temp = (*lst)->next;
		free(*lst);
		*lst = temp;
	} lst = NULL;
}
