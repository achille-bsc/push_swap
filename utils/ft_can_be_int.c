/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_can_be_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:05:47 by ameduboi          #+#    #+#             */
/*   Updated: 2025/02/16 06:23:14 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_can_be_int(const char *nb_ptr)
{
	int			i;
	long long	result;
	int			sign;

	result = 0;
	i = 0;
	sign = 1;
	while ((nb_ptr[i] >= 9 && nb_ptr[i] <= 13) || nb_ptr[i] == 32)
		i++;
	if (nb_ptr[i] == 45 || nb_ptr[i] == 43)
	{
		if (nb_ptr[i] == 45)
			sign = -1;
		i++;
	}
	while (nb_ptr[i])
	{
		if (ft_isdigit(nb_ptr[i]) == 0)
		{
			if (ft_isdigit(nb_ptr[--i]) == 0)
				return (1);
			return (0);
		}
		result = result * 10 + nb_ptr[i++] - 48;
	}
	result *= sign;
	if (result < -2147483648 || result > 2147483647)
		return (0);
	return (1);
}
/*
int	main(void)
{
	printf("%d",ft_can_be_int("       -123456"));
}
*/
