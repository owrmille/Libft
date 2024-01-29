NAME = libftupd.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a
MAKE_LIB = ar -rcs
INCS = .

SRCS = test.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS) $(LIBFT)
	$(MAKE_LIB) $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -I$(INCS)

$(LIBFT) :
	cd $(LIBFT_PATH) && make
	cp $(LIBFT) $(NAME)

clean :
	rm -rf $(OBJS) $(NAME)

fclean : clean
	cd $(LIBFT_PATH) && make fclean

re: fclean all

.PHONY: all clean fclean re