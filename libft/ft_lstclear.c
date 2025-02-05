/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameduboi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:31:44 by ameduboi          #+#    #+#             */
/*   Updated: 2025/01/21 20:24:26 by ameduboi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstclear(t_pile **lst, void (*del)(void *))
{
	t_pile	*temp;

	while ((*lst)->next)
	{
		(*del)((*lst)->data);
		temp = (*lst)->next;
		free(*lst);
		*lst = temp;
	} lst = NULL;
}
