/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:07:48 by sperron           #+#    #+#             */
/*   Updated: 2024/05/14 14:21:48 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			j++;
		i++;
	}
	return (j);
}
/*
#include <stdio.h>

int	even_lenght(char *str)
{
	int		i = 0;
	while (str[i] != '\0')
		i++;
	return i % 2 == 0;
}

int main()
{
	char 	*tab[] = {"hello", "world", "this", "is", "a", "test"};;
	int		count;

	count = ft_count_if(tab, &even_lenght);
    printf("Number of strings with even length: %d\n", count);
    return 0;	
}
*/