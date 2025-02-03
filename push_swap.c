/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameduboi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 18:25:23 by ameduboi          #+#    #+#             */
/*   Updated: 2025/02/03 23:51:32 by ameduboi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list *list_a, t_list *list_b)
{
	
}

int	main(int argc, t_list *list_a)
{
	t_list	*list_b;

	list_b = NULL;
	pb(list_a, list_b);
	write(1, "pb\n", 3);
	pb(list_a, list_b);
	write(1, "pb\n", 3);
}



























/*
void	sort(t_list *list_a)
{
	t_list	*list_b;

	list_b = NULL;
	while (ft_lstsize(list_a) > 3)
	{
		while (ft_lstlast(list_a) < list_a)
		{
			rra(list_a);
			write(1, "rra\n", 4);
			pb(list_a, list_b);
			write(1, "pb\n", 3);
		}
		while (list_a > list_a->next)
		{
			if (list_a > list_a->next->next)
			{
				ra(list_a);
				write(1, "ra\n", 3);
			}
			else
			{
				sa(list_a);
				write(1, "sa\n", 3);
			}
			pb(list_a, list_b);
			write(1, "pb\n", 3);
		}

	}
}

void	three_rest(t_list *list_a)
{
	if (list_a < list_a->next)
	{
		if (list_a < ft_lstlast(list_a))
		{
			ra(list_a);
			write(1, "ra\n", 3);
		}
		else
		{
			sa(list_a);
			write(1, "sa\n", 3);
		}
	}
}

int	main(int argc, t_list *list_a)
{
	sort(list_a);
	three_rest(list_a);
}

void	push_swap(char *a)
{
	char	*b;
	int		i;
	int		j;

	j = 0;
	i = 0;
	b = "";
}
*/
