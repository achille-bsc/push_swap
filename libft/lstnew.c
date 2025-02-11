/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:44:35 by ameduboi          #+#    #+#             */
/*   Updated: 2025/02/11 22:33:41 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_pile	*ft_lstnew(int content)
{
	  t_pile	*new;

	  new = malloc(sizeof(t_pile *));
	  new->data = content;
	  new->index = 0;
	  new->next = NULL;
	  return (new);
}
