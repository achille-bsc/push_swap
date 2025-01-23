/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameduboi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 18:25:23 by ameduboi          #+#    #+#             */
/*   Updated: 2025/01/23 19:14:24 by ameduboi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(char *a)
{
	char	*b;
	int		i;
	int		j;

	j = 0
	i = 0;
	b = "";

}

/*
int a;
t_list next;

pile_a->a=42; 
pile_a->next->a= 43;
pile_a->next->next->next->a=24;

int temp = pile_a->a; 
pile_a->a = pile_a->next->a;
pile_a->next->a = temp;
pile_a = 42 43   24;
*/

void	main(int argc, char **argv)
{
	int	i;


	i = 1;
	if (argc >= 2)
	{
		while (argv[i])
			push_swap(argv[i++]);
	}
}
