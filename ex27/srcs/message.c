/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   message.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:54:49 by mel-habi          #+#    #+#             */
/*   Updated: 2024/05/16 10:01:38 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

void	ft_putchar(char c, int type)
{
	write(type, &c, 1);
}

void	ft_puterror(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i], ERROR_CODE);
		i++;
	}
	ft_putchar('\n', ERROR_CODE);
}
