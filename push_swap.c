/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameduboi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 18:25:23 by ameduboi          #+#    #+#             */
/*   Updated: 2025/02/05 18:39:31 by ameduboi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start_sort(t_pile *list_a, t_pile *list_b)
{
	pb(list_a, list_b);
	write(1, "pb\n", 3);
	pb(list_a, list_b);
	write(1, "pb\n", 3);
	if (list_b < list_b->next)
	{
		sb(list_b);
		write(1, "sb\n", 3);
	}
}

void	sort_pile_b(t_pile *list_a, t_pile *list_b)
{
	t_pile	*temp_b;

	temp_b = list_b;
	while (ft_lstsize(list_a) >= 3)
	{
		while (ft_lstsize(list_b))
		{
			while (list_b < temp_b->next && temp_b->next)
				temp_b = temp_b->next;
			
		}
	}
}

void    three_rest(t_pile *list_a)
{
	if (list_a > list_a->next)
	{
		if (list_a > ft_lstlast(list_a))
		{
			ra(list_a);
			write(1, "ra\n", 3);
			if (list_a > list_a->next)
			{
				sa(list_a);
				write(1, "sa\n", 3);
			}
		}
		else
		{
			sa(list_a);
			write(1, "sa\n", 3);
		}
	}
}

// void	final_sort(t_pile *list_a, t_pile *list_b)
// {
	
// }

int	main(int argc, char **argv)
{
	t_pile	*list_a;
	char	**tab;
	t_pile	*list_b;
	int	i;

	 i = 0;
	if (argc == 2)
	{
		tab = ft_split(argv[1], " ");
		while (tab[i])
		{
			if (ft_can_be_int(tab[i]) == 0)
			{
				free_all(tab);
				exit(1);
			}
			i++;
		}
	}
	list_a = NULL;
	list_b = NULL;
	start_pile_b(list_a, list_b);
	sort_pile_b(list_a, list_b);
	three_rest(list_a);
	final_sort(list_a, list_b);
}



























/*
void	sort(t_pile *list_a)
{
	t_pile	*list_b;

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

void	three_rest(t_pile *list_a)
{
	if (list_a > list_a->next)
	{
		if (list_a > ft_lstlast(list_a))
		{
			ra(list_a);
			write(1, "ra\n", 3);
			if (list_a > list_a->next)
			{
				sa(list_a);
				write(1, "sa\n", 3);
			}
		}
		else
		{
			sa(list_a);
			write(1, "sa\n", 3);
		}
	}
}

int	main(int argc, t_pile *list_a)
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
