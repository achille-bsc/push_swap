/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 18:25:23 by abosc             #+#    #+#             */
/*   Updated: 2025/02/13 04:18:27 by abosc            ###   ########.fr       */
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
			pa(pile_a, pile_b);
			j++;
			len_b--;
		}
	}
	ft_printf("Operations: %d\n", j);
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

int	main(int ac, char **av)
{
	t_pile	**pile_a;
	t_pile	**pile_b;

	pile_a = parsing(ac, av);
	pile_b = NULL;
	indexing(pile_a);
	sort(pile_a, pile_b);
	return (0);
}
