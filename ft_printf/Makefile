# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/10 18:56:18 by jaicastr          #+#    #+#              #
#    Updated: 2025/04/10 19:07:29 by jaicastr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

AR = ar rcs
COMPILER = cc
FLAGS = -Wall -Wextra -Werror

OBJDIR	=	build
SRCDIR	=	src
INCLUDE	=	include
LIBDIR	=	libft
LIB 	=	$(LIBDIR)/libft.a
SRC		=	$(wildcard $(SRCDIR)/*.c)
OBJ		=	$(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBDIR)
	$(AR) $(NAME) $(OBJ) $(LIB)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	$(COMPILER) $(FLAGS) -I$(LIBDIR) -I$(INCLUDE) -c $< -o $@

clean:
	rm -rf $(OBJDIR)
	make -C $(LIBDIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBDIR) fclean

re: fclean all

.PHONY: all clean fclean re
