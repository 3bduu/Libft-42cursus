# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/23 14:12:14 by abenlahb          #+#    #+#              #
#    Updated: 2022/11/04 17:16:49 by abenlahb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_memchr.c ft_putchar_fd.c  ft_strchr.c     ft_strlcpy.c    ft_strrchr.c \
	ft_atoi.c       ft_isascii.c    ft_memcmp.c     ft_putendl_fd.c ft_strdup.c     ft_strlen.c \
	ft_strtrim.c ft_bzero.c      ft_isdigit.c    ft_memcpy.c     ft_putnbr_fd.c  ft_striteri.c   \
	ft_strmapi.c    ft_substr.c ft_calloc.c     ft_isprint.c    ft_memmove.c    ft_putstr_fd.c  \
	ft_strjoin.c    ft_strncmp.c    ft_tolower.c ft_isalnum.c    ft_itoa.c       ft_memset.c     \
	ft_split.c      ft_strlcat.c    ft_strnstr.c    ft_toupper.c

OBJECT = $(SRC:.c=.o)
SRC_B = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJECT_B = $(SRC_B:.c=.o)
CC = cc
NAME = libft.a
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror


all: $(NAME)
	
$(NAME): $(OBJECT)

bonus : $(OBJECT) $(OBJECT_B)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@
	ar -rc $(NAME) $@
clean:
	$(RM) $(OBJECT) $(OBJECT_B)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY: all bonus clean fclean re
