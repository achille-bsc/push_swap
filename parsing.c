/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 22:18:54 by abosc             #+#    #+#             */
/*   Updated: 2025/02/19 22:00:13 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	parsing(char *arg, t_pile **pile_a)
{
	if (!arg || ft_can_be_int(arg) == 0)
		print_errors(pile_a);
	ft_lstadd_back(pile_a, ft_lstnew(ft_atoi(arg)));
}

void	verif_doubles(t_pile **pile_a)
{
	t_pile	*temp1;
	t_pile	*temp2;

	temp1 = (*pile_a);
	temp2 = (*pile_a)->next;
	while (temp1->next)
	{
		while (temp2)
		{
			if (temp1->data == temp2->data)
				print_errors(pile_a);
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
		temp2 = temp1->next;
	}
}

void	print_errors(t_pile **pile_a)
{
	ft_lstadd_back(pile_a, ft_lstnew(0));
	ft_lstclear(pile_a);
	write(2, "Error\n", 6);
	exit(1);
}
