NAME	=	pipex

SRCS	=	ft_pipex.c\
			utils.c

HEADER	= 	pipex.h

OBJS	=	$(patsubst %.c,%.o,$(SRCS))

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER)

all		:	$(NAME)

$(NAME)	:	$(OBJS) $(HEADER)
		@$(MAKE) -C libft
		@$(CC) $(OBJS) $(CFLAGS) ./libft/libft.a -o $(NAME)

%.o		:	%.c $(HEADER)
		$(CC) $(CFLAGS) -c $< -o $@

clean	:
		$(MAKE) -C libft clean
		@rm -f $(OBJS)

fclean	:	clean
		$(MAKE) -C libft fclean
		@$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
