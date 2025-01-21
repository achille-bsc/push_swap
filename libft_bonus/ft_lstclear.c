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

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst->next)
	{
		(*del)((*lst)->content);
		temp = (*lst)->next;
		free(*lst);
		*lst = temp;
	} lst = NULL;
}
