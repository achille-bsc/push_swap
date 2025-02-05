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

#include "../push_swap.h"

t_pile	*ft_lstnew(void *content)
{
	  t_pile	*new;

	  new = malloc(sizeof(t_pile *));
	  new->data = content;
	  new->next = NULL;
	  return (new);
}
