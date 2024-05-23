/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:49:02 by sperron           #+#    #+#             */
/*   Updated: 2024/05/14 14:33:40 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 1)
		return (0);
	while (++i < ac)
	{
		while (*av[i] != '\0')
			ft_putchar(*av[i]++);
		ft_putchar('\n');
	}
	return (0);
}
