CC         := cc
CFLAGS     := -Wall -Wextra -Werror

NAME       := libft.a

SRCDIR     := srcs
INCDIR     := includes

SRCS       := $(SRCDIR)/ft_putchar.c $(SRCDIR)/ft_swap.c $(SRCDIR)/ft_putstr.c $(SRCDIR)/ft_strlen.c $(SRCDIR)/ft_strcmp.c
OBJS       := $(SRCS:.c=.o)

all: $(NAME)

$(SRCDIR)/%.o: $(SRCDIR)/%.c $(INCDIR)/ft.h
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@
	@echo "Compiled: $<"

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	@echo "Removed library: $(NAME)"

re: fclean all

.PHONY: all clean fclean re
