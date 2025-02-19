/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:37:58 by abosc             #+#    #+#             */
/*   Updated: 2025/02/19 21:56:24 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	main_sort(int argc, t_pile **pile_a, t_pile **pile_b)
{
	if (argc == 3)
		sa(pile_a);
	else if (argc == 4)
		tree_sort(pile_a);
	else if (argc == 5)
		for_sort(pile_a, pile_b);
	else if (argc == 6)
		high_five_sort(pile_a, pile_b);
	else
		sort(pile_a, pile_b, -1);
}

void	main_parsing(char **argv, t_pile **pile_a)
{
	int	i;

	i = 1;
	while (argv[i] != NULL)
	{
		parsing(argv[i], pile_a);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_pile	*pile_a;
	t_pile	*pile_b;
	t_pile	*temp;

	pile_a = NULL;
	pile_b = NULL;
	(void)argc;
	main_parsing(argv, &pile_a);
	if (argc == 2 || argc == 1)
		return (free(pile_a), 0);
	verif_doubles(&pile_a);
	temp = pile_a;
	while (temp)
		temp = temp->next;
	temp = pile_a;
	temp = pile_a;
	indexing(&pile_a);
	if (is_sorted(&pile_a))
		return (ft_lstclear(&pile_a), 0);
	main_sort(argc, &pile_a, &pile_b);
	temp = pile_a;
	while (temp)
		temp = temp->next;
	ft_lstclear(&pile_a);
	return (0);
}
