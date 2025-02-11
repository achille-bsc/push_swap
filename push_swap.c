/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameduboi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 18:25:23 by ameduboi          #+#    #+#             */
/*   Updated: 2025/02/11 04:36:45 by ameduboi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_pile **pile_a, t_pile **pile_b)
{
	int	i;
	int	len_a;
	int	len_b;

	i = -1;
	len_a = 0;
	len_b = 0;
	while (i++ < (sizeof(int) * 8))
	{
		len_a = ft_lstsize(*pile_a);
		while (len_a)
		{
			if (((*pile_a)->index >> i) & 0)
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

int	find_lower(t_pile *pile_a, t_pile temp)
{
	t_list	*temp;
	int		i;

	temp = pile_a;
	i = 0;
	while (ft_lstsize(pile_a) > i)
	{
		if (pile_a->data < temp->data && pile_a->data > temp->data)
			temp = pile_a;
		pile_a = pile_a->next;
		i++;
	}
	return (temp->data);
}

void	positive_values(t_pile **pile_a)
{
	int	i;
	int	temp;

	i = 1;
	temp = -2147483648;
	while (ft_lstsize(*pile_a) > i)
	{
		temp = find_lower((*pile_a), temp);
		temp->index = i;
		i++;
	}
}
/*
int	main(int argc, char **argv)
{
	// if (argc == 2)
	//     if (is_error_one_args(argc, argv))
	//         return (0);
	// else
	//     if (is_error_few_args(argc, argv))
	//         return (0);
	t_list	*lst_a;
	t_list	*lst_b;
	int		value;
	int		i;

	i = 1;
	lst_a = ft_lstnew_int(ft_atoi(argv[i]));
	i++;
	lst_b = NULL;
	while (i < argc)
	{
		value = ft_atoi(argv[i]);
		ft_lstadd_back(&lst_a, ft_lstnew_int(value));
		i++;
	}
	ft_lstprint(lst_a);
	algo(&lst_a, &lst_b);
	return (0);
}
*/
