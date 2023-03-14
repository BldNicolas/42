# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nberlaud <nberlaud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/10 12:05:56 by nberlaud          #+#    #+#              #
#    Updated: 2022/06/10 12:05:56 by nberlaud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables

NAME		=	libftprintf.a
SRC_DIR		=	src/
OBJ_DIR		=	obj/
CFLAGS		=	
I_DIR		=	include
CC			=	gcc

#Sources

SRC			=	ft_print_char.c\
				ft_print_hex.c\
				ft_print_nbr.c\
				ft_print_percent.c\
				ft_print_ptr.c\
				ft_print_str.c\
				ft_print_unsigned.c\
				ft_printf.c\

OBJ 		= 	$(SRC:%.c=%.o)
OBJ_PFX		=	$(addprefix $(OBJ_DIR)/, $(OBJ))

###

all:		$(NAME)

libft/libft.a:
	make -C libft

$(NAME):	libft/libft.a $(OBJ_PFX)
			cp libft/libft.a $(NAME)
			ar -rcs $(NAME) $(OBJ_PFX)
			

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
			mkdir -p $(OBJ_DIR)
			$(CC) $(CFLAGS) -o $@ -c $< -I$(I_DIR)

run: all
			$(CC) -o run main.c -L. -lftprintf -I$(I_DIR)
			./run
			rm -f run

clean:
			make -C libft clean
			rm -rf $(OBJ_DIR)

fclean:		clean
			make -C libft fclean
			rm -f $(NAME) && rm -f libft/libft.a

re:			fclean all

.PHONY:		all clean fclean re norm