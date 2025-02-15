/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 00:14:53 by abosc             #+#    #+#             */
/*   Updated: 2025/02/16 00:47:10 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

t_pile	*parsing(int argc, char **argv) {
	char **values;
	t_pile *pile_a;
    int i;

	i = 0;
	pile_a = NULL;
	write(1, "Non\n", 4);
	if (argc == 2) {
		write(1, "chut\n", 5);
		values = ft_split(argv[1], ' ');
		while (values[i]) {
			write(1, "ok\n", 3);
			if (!ft_can_be_int(values[i])) {
				write(1, "int\n", 4);
				ft_lstclear(&pile_a);
				print_errors();
			}
			ft_lstadd_back(&pile_a, ft_lstnew(ft_atoi(values[i])));
			write(1, "fin\n", 4);
			i++;
		}
	}
	else if (argc > 2)
		multiple_args(&pile_a, argv);
	else
		exit(0);
	return (pile_a);
}

void multiple_args(t_pile **pile_a, char **argv) {
	int i;

	i = 1;
	// TODO: Test anything
	write(1, "evidemment\n", 11);
	while (argv[i]) {
		if (!ft_can_be_int(argv[i]))
			print_errors();
		ft_lstadd_back(pile_a, ft_lstnew(ft_atoi(argv[i])));
		write(1, "ca fonctionne\n", 14);
		i++;
	}
}

int verif_doubles(t_pile **pile_a) {
	int i;
	int size;
	t_pile *temp;
	t_pile *temp_of_your_race;

	temp = (*pile_a);
	temp_of_your_race = (*pile_a)->next;
	i = 0;
	size = ft_lstsize(*pile_a);
	while (i < size) {
		size = ft_lstsize(*pile_a) - i;
		while (size) {
			if (temp_of_your_race->data == temp->data)
				return (0);
			temp_of_your_race = temp_of_your_race->next;
			size--;
		}
		temp = temp->next;
		i++;
	}
	return (1);
}
