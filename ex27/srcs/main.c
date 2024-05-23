/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:23:15 by mel-habi          #+#    #+#             */
/*   Updated: 2024/05/16 10:01:30 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int	main(int argc, char **argv)
{
	int			fd;
	char		c;

	if (argc == 1)
		ft_puterror("File name missing.");
	else if (argc > 2)
		ft_puterror("Too many arguments.");
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			ft_puterror("Cannot read file.");
		else
		{
			while (read(fd, &c, 1))
				ft_putchar(c, SUCCESS_CODE);
			close(fd);
		}
	}
	return (0);
}
