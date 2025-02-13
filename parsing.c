/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 00:14:53 by abosc             #+#    #+#             */
/*   Updated: 2025/02/13 04:23:59 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

t_pile	**parsing(int argc, char **argv)
{
	t_pile	**pile_a;
	char	**values;
	int		i;

	i = 0;
	pile_a = NULL;
	if (argc == 2)
	{
		values = ft_split(argv[1], ' ');
		while (values[i])
		{
			if (!ft_can_be_int(values[i]))
			{
				ft_lstclear(pile_a);
				print_errors();
			}
			ft_lstadd_back(pile_a, ft_lstnew(ft_atoi(values[i])));
			i++;
		}
	}
	else if (argc > 2)
		multiple_args(pile_a, argv);
	else
		print_errors();
	return (pile_a);
}

void	multiple_args(t_pile **pile_a, char **argv)
{
	int	i;
	
	i = 1;
	while (argv[i])
	{
		if (!ft_can_be_int(argv[i]))
			print_errors();
		ft_lstadd_back(pile_a, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}
}

int	verif_doubles(t_pile **pile_a)
{
	int		i;
	int		size;
	t_pile	*temp;
	t_pile	*temp_of_your_race;

	temp = (*pile_a);
	temp_of_your_race = (*pile_a)->next;
	i = 0;
	size = ft_lstsize(*pile_a);
	while (i < size)
	{
		size = ft_lstsize(*pile_a) - i;
		while (size)
		{
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
