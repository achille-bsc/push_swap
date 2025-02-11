/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 18:25:23 by abosc             #+#    #+#             */
/*   Updated: 2025/02/11 22:32:32 by abosc            ###   ########.fr       */
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
	while (i++ < (int)(sizeof(int) * 8))
	{
		len_a = ft_lstsize(*pile_a);
		while (len_a)
		{
			if (((*pile_a)->index >> i) & 0)
				pb(pile_a, pile_b);
			else
				ra(pile_a, 1);
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

t_pile	*find_lower(t_pile *pile_a, t_pile *temp)
{
	t_pile	*min;
	int		i;

	min = pile_a;
	i = 0;
	while (ft_lstsize(pile_a) > i)
	{
		if (pile_a->data < min->data && pile_a->data > temp->data)
			min = pile_a;
		pile_a = pile_a->next;
		i++;
	}
	return (min);
}

void	positive_datas(t_pile **pile_a)
{
	int		i;
	t_pile	*temp;

	temp = *pile_a;
	i = 1;
	temp->data = -2147483648;
	while (ft_lstsize(*pile_a) > i)
	{
		temp = find_lower((*pile_a), temp);
		temp->index = i;
		i++;
	}
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
	printf("Pile A avant tri :\n");
	temp = pile_a;
	while (temp)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
	// Transformer les valeurs en index positifs
	positive_datas(&pile_a);
	// Trier les piles
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
