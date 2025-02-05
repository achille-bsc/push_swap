/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_can_be_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameduboi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:05:47 by ameduboi          #+#    #+#             */
/*   Updated: 2025/02/05 18:06:32 by ameduboi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_can_be_int(const char *nptr)
{
	int	i;
	long long	result;
	int	sign;

	result = 0;
	i = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == 45 || nptr[i] == 43)
	{
		if (nptr[i] == 45)
			sign = -1;
		i++;
	}
	while (nptr[i])
	{
		if (ft_isdigit(nptr[i]) == 0)
			return (0);
		result = result * 10 + nptr[i++] - 48;
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
