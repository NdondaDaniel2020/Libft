# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmatondo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/20 13:12:46 by nmatondo          #+#    #+#              #
#    Updated: 2024/05/20 13:12:48 by nmatondo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = ./libft.a
H = libft.h
FILES = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c\
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c\
		ft_strnstr.c\
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c\
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c

BFILES = ft_lstnew.c \
		 ft_lstadd_front.c \
		 ft_lstsize.c \
	 	 ft_lstlast.c \
	 	 ft_lstadd_back.c \
	 	 ft_lstdelone.c \
	 	 ft_lstclear.c \
	 	 ft_lstiter.c \
	 	 ft_lstmap.c

OBJS = $(FILES:.c=.o)
BOBJS = $(BFILES:.c=.o)

FLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJS)
	gcc $(FLAGS) -c $(FILES) $(H)
	ar rc $(NAME) $(OBJS)

bonus:	$(OBJS) $(BOBJS)
	ar rc $(NAME) $(OBJS) $(BOBJS)

clean:
	/bin/rm -f $(OBJS) $(BOBJS)

fclean:	clean
	/bin/rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re