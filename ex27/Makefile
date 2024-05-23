# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sperron <sperron@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 14:25:03 by mel-habi          #+#    #+#              #
#    Updated: 2024/05/16 10:03:18 by sperron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRCS = srcs/main.c srcs/message.c
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror -I includes

$(NAME): $(OBJS)
	cc -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: $(NAME) all clean fclean re	
