/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:49:28 by sperron           #+#    #+#             */
/*   Updated: 2024/05/15 10:38:10 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*board;
	int	len;
	int	i;

	if (min >= max)
		return (0);
	len = max - min;
	board = (int *)malloc(sizeof(*board) * len);
	if (!board)
		return (0);
	i = 0;
	while (min < max)
		board[i++] = min++;
	return (board);
}
