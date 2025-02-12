/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 18:25:23 by abosc             #+#    #+#             */
/*   Updated: 2025/02/12 23:29:15 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	sort(t_pile **pile_a, t_pile **pile_b)
{
	int	i;
	int	len_a;
	int	len_b;

	i = -1;
	len_a = 0;
	len_b = 0;
	while (++i < (int)(sizeof(int) * 8))
	{
		len_a = ft_lstsize(*pile_a);
		while (len_a)
		{
			if (!((((*pile_a)->index) >> i) & 1))
				pb(pile_a, pile_b);
			else
				ra(pile_a);
			len_a--;
		}
		len_b = ft_lstsize(*pile_b);
		while (len_b)
		{
			pa(pile_a, pile_b);
			len_b--;
		}
	}
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

int	main(void)
{
	t_pile	*pile_a;
	t_pile	*pile_b;
	t_pile	*temp;

	pile_a = NULL;
	pile_b = NULL;
	// Ajout des valeurs à pile_a
	ft_lstadd_back(&pile_a, ft_lstnew(42));
	ft_lstadd_back(&pile_a, ft_lstnew(17));
	ft_lstadd_back(&pile_a, ft_lstnew(8));
	ft_lstadd_back(&pile_a, ft_lstnew(23));
	ft_lstadd_back(&pile_a, ft_lstnew(34));
	temp = pile_a;
	printf("Pile A avant tri :\n");
	while (temp)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
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
	lst_print(&pile_a);
	lst_print_index(&pile_a);
	sort(&pile_a, &pile_b);
	printf("Pile A après tri :\n");
	temp = pile_a;
	while (temp)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
	return (0);
}
