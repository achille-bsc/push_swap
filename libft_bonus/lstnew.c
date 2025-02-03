/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameduboi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:44:35 by ameduboi          #+#    #+#             */
/*   Updated: 2025/01/21 19:02:04 by ameduboi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	  t_list	*new;

	  new = malloc(sizeof(t_list *));
	  new->content = content;
	  new->next = NULL;
	  return (new);
}
