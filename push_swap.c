/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 18:25:23 by abosc             #+#    #+#             */
/*   Updated: 2025/02/12 05:57:53 by abosc            ###   ########.fr       */
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
		while (*pile_a)
		{
			printf("test1 %d\n", (*pile_a)->data);
			printf("test1 %d\n", ft_lstsize(*pile_a));
			// printf("test1 %d\n", (*pile_a)->next->data);
			usleep(100000);
			if (((*pile_a)->index >> i) & 0)
				pb(pile_a, pile_b);
			else
				ra(pile_a, 1);
		}
		while (*pile_b)
		{
			printf("test4\n");
			pa(pile_a, pile_b);
		}
	}
}

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
		ft_printf("print i: %d\n", i);
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
		ft_printf("temp_max: %d\n", temp_max->index);
		ft_printf("temp_max val: %d\n", temp_max->data);
		ft_printf("max: %d\n", max);
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
