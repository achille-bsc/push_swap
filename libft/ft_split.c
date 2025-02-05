/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameduboi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:36:04 by ameduboi          #+#    #+#             */
/*   Updated: 2025/02/05 18:34:37 by ameduboi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_countword(char const *s, char c)
{
	int	count;
	int	i;
	int	verif;

	i = 0;
	count = 0;
	verif = 1;
	while (s[i])
	{
		if (s[i] == c && verif == 0)
		{
			count++;
			verif = 1;
		}
		if (s[i] != c)
			verif = 0;
		i++;
		if (s[i] == '\0' && s[i - 1] != c)
			count++;
	}
	return (count);
}

char	**free_all(char **result)
{
	int	i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

char	**ft_split_replace(char const *s, char **result, int j, char c)
{
	int	start;
	int	i;
	int	k;

	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (start < i)
		{
			result[j] = malloc((i - start + 1) * sizeof(char));
			if (!result[j])
				return (free_all(result));
			k = 0;
			while (start < i)
				result[j][k++] = s[start++];
			result[j++][k] = '\0';
		}
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		j;

	result = malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	j = 0;
	return (ft_split_replace(s, result, j, c));
}
/*
int    main(void)
{
 	char const	str[] = "salut dpfpfpfpg fg fggf ";
 	int	i;
  	char	c = ' ';
   	char	**result;

	result = ft_split(str, c);
	i = 0;
	while (result[i])
	{
   		printf("%s", result[i]);
   		i++;
   	}
   	free_all(result);
}
*/
