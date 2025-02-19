/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_can_be_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:05:47 by abosc             #+#    #+#             */
/*   Updated: 2025/02/17 22:18:20 by abosc            ###   ########.fr       */
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
		if (nb_ptr[i + 1] == '\0')
			return (0);
		i++;
	}
	while (nb_ptr[i])
	{
		if (ft_isdigit(nb_ptr[i]) == 0)
			return (0);
		result = result * 10 + nb_ptr[i++] - 48;
	}
	result *= sign;
	return (!(result < -2147483648 || result > 2147483647));
}
