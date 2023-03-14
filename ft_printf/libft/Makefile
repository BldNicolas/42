# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nberlaud <nberlaud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/05 17:47:00 by nberlaud          #+#    #+#              #
#    Updated: 2022/06/10 14:53:58 by nberlaud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables

NAME		=	libft.a
SRCS_DIR	=	src/
OBJS_DIR	=	obj/
CFLAGS		=	-Wall -Werror -Wextra -I

#Sources

FT_IS_DIR	=	ft_is/
FT_IS		=	ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint

FT_MEM_DIR	=	ft_mem/
FT_MEM		=	ft_bzero ft_calloc ft_memccpy ft_memchr ft_memcmp \
				ft_memcpy ft_memmove ft_memset

FT_PUT_DIR	=	ft_put/
FT_PUT		=	ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd

FT_STR_DIR	=	ft_str/
FT_STR		=	ft_split ft_strchr ft_strdup ft_striteri ft_strjoin \
				ft_strlcat ft_strlcpy ft_strlen ft_strmapi ft_strncmp \
				ft_strnstr ft_strrchr ft_strtrim ft_substr

FT_TO_DIR	=	ft_to/
FT_TO		=	ft_atoi ft_itoa ft_tolower ft_toupper

SRC_FILES+=$(addprefix $(FT_IS_DIR),$(FT_IS))
SRC_FILES+=$(addprefix $(FT_MEM_DIR),$(FT_MEM))
SRC_FILES+=$(addprefix $(FT_PUT_DIR),$(FT_PUT))
SRC_FILES+=$(addprefix $(FT_TO_DIR),$(FT_TO))
SRC_FILES+=$(addprefix $(FT_STR_DIR),$(FT_STR))

SRCS 		= 	$(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS 		= 	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC_FILES)))

###

OBJSF		=	.cache_exists

all:		$(NAME)

$(NAME):	$(OBJS)
			@ar rcs $(NAME) $(OBJS)
			@ranlib $(NAME)

$(OBJS_DIR)%.o : $(SRCS_DIR)%.c | $(OBJSF)
			@gcc $(CFLAGS) ../include -c $< -o $@

$(OBJSF):
			@mkdir -p $(OBJS_DIR)
			@mkdir -p $(OBJS_DIR)$(FT_IS_DIR)
			@mkdir -p $(OBJS_DIR)$(FT_MEM_DIR)
			@mkdir -p $(OBJS_DIR)$(FT_PUT_DIR)
			@mkdir -p $(OBJS_DIR)$(FT_TO_DIR)
			@mkdir -p $(OBJS_DIR)$(FT_STR_DIR)
			@mkdir -p $(OBJS_DIR)$(FT_LST_DIR)

clean:
			@rm -rf $(OBJS_DIR)
			@rm -f $(OBJSF)

fclean:		clean
			@rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re norm
