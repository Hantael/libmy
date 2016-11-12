##
## Makefile for libmy_a in /home/hantael/rendu/libmy_a
##
## Made by MORARD Marine
## Login   <morard_m@etna-alternance.net>
##
## Started on  Sat Oct 22 18:13:00 2016 MORARD Marine
## Last update Tue Oct 25 11:24:08 2016 MORARD Marine
##

CC	= gcc

RM	= rm -f

NAME	= libmy.a

SRCS	= my_putchar.c \
	  my_isneg.c \
	  my_put_nbr.c \
	  my_swap.c \
	  my_putstr.c \
	  my_strlen.c \
	  my_getnbr.c \
	  my_strcpy.c \
	  my_strncpy.c \
	  my_strstr.c \
	  my_strcmp.c \
	  my_strncmp.c \
	  my_strcat.c \
	  my_strncat.c \
	  my_str_to_wordtab.c \
	  my_strdup.c

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
