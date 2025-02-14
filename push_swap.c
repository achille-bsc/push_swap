/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 18:25:23 by abosc             #+#    #+#             */
/*   Updated: 2025/02/14 04:19:09 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	sort(t_pile **pile_a, t_pile **pile_b)
{
	int	i;
	int	j;
	int	len_a;
	int	len_b;

	i = -1;
	j = 0;
	len_a = 0;
	len_b = 0;
	while (++i < (int)(sizeof(int) * 8))
	{
		if (is_sorted(pile_a) == 1)
			break ;
		len_a = ft_lstsize(*pile_a);
		while (len_a)
		{
			if (!((((*pile_a)->index) >> i) & 1))
			{
				pb(pile_a, pile_b);
				j++;
			}
			else
			{
				ra(pile_a);
				j++;
			}
			len_a--;
		}
		len_b = ft_lstsize(*pile_b);
		while (len_b)
		{
			// if (((((*pile_a)->next->index) >> i) & 1))
			pa(pile_a, pile_b);
			j++;
			len_b--;
		}
	}
	ft_printf("Operations: %d\n", j);
}

int	is_sorted(t_pile **pile_a)
{
	unsigned int	previous;
	t_pile			*temp;

	temp = *pile_a;
	previous = 0;
	while (temp)
	{
		if (previous > temp->index)
			return (0);
		previous = temp->index;
		temp = temp->next;
	}
	return (1);
}
// RA PB RA RA PB

void	indexing(t_pile **pile_a)
{
	t_pile	*temp;
	t_pile	*temp_max;
	int		i;
	int		max;

	i = ft_lstsize(*pile_a);
	while (i >= 1)
	{
		max = -2147483648;
		temp = *pile_a;
		while (temp)
		{
			if (temp->data > max && temp->index == 0)
			{
				max = temp->data;
				temp_max = temp;
			}
			temp = temp->next;
		}
		temp_max->index = i;
		i--;
	}
}

void	lst_print(t_pile **pile)
{
	t_pile	*temp;

	temp = (*pile);
	ft_printf("[");
	while (temp->next)
	{
		ft_printf("%d, ", temp->data);
		temp = temp->next;
	}
	ft_printf("%d", temp->data);
	ft_printf("]\n");
}
void	lst_print_index(t_pile **pile)
{
	t_pile	*temp;

	temp = (*pile);
	ft_printf("[");
	while (temp->next)
	{
		ft_printf("%d, ", temp->index);
		temp = temp->next;
	}
	ft_printf("%d", temp->index);
	ft_printf("]\n");
}

// int	main(int ac, char **av)
// {
// 	t_pile	**pile_a;
// 	t_pile	**pile_b;

// //	pile_a = parsing(ac, av);
// 	pile_a = ft_lstnew(42);
// 	ft_lstadd_back(pile_a, ft_lstnew(-42));
// 	ft_lstadd_back(pile_a, ft_lstnew(21));
// 	ft_lstadd_back(pile_a, ft_lstnew(-21));
// 	ft_lstadd_back(pile_a, ft_lstnew(24));
// 	ft_lstadd_back(pile_a, ft_lstnew(-24));
// 	ft_lstadd_back(pile_a, ft_lstnew(12));
// 	ft_lstadd_back(pile_a, ft_lstnew(-12));
// 	pile_b = NULL;
// 	indexing(pile_a);
// 	sort(pile_a, pile_b);
// 	return (0);
// }

int	main(int ac, char **av)
{
	t_pile	*pile_a;
	t_pile	*pile_b;
	t_pile	*temp;
	int		i;

	pile_a = NULL;
	pile_b = NULL;
	// Ajout des valeurs à pile_a
	(void)ac;
	i = 0;
	while (av[++i] != NULL)
		ft_lstadd_back(&pile_a, ft_lstnew(ft_atoi(av[i])));
	temp = pile_a;
	// rintf("Pile A avant tri :\n");
	while (temp)
	{
		// printf("%d ", temp->data);
		temp = temp->next;
	}
	// printf("\n");
	// Transformer les valeurs en index positifs
	// positive_datas(&pile_a);
	// Trier les piles
	temp = pile_a;
	// while (temp)
	// {
	// 	printf("%d ", temp->index);
	// 	temp = temp->next;
	// }
	temp = pile_a;
	indexing(&pile_a);
	// lst_print(&pile_a);
	sort(&pile_a, &pile_b);
	// printf("Pile A après tri :\n");
	temp = pile_a;
	while (temp)
	{
		//	printf("%d ", temp->data);
		temp = temp->next;
	}
	// printf("\n");
	return (0);
}
