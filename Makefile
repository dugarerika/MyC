# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/02 08:19:03 by etavera-          #+#    #+#              #
#    Updated: 2023/02/02 09:11:19 by etavera-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			=	ft_isalnum.c ft_isprint.c ft_putchar_fd.c ft_itoa.c\
					ft_strlcat.c ft_substr.c ft_isalpha.c ft_atoi.c\
					ft_memcpy.c  ft_putendl_fd.c ft_strlcpy.c \
					ft_tolower.c ft_bzero.c ft_isascii.c ft_strchr.c\
					ft_memmove.c ft_putnbr_fd.c ft_strlen.c ft_strrchr.c \
					ft_toupper.c ft_isdigit.c ft_memset.c ft_memcmp.c \
					ft_putstr_fd.c  ft_strjoin.c ft_strncmp.c ft_strnstr.c\
					ft_memchr.c ft_calloc.c ft_strdup.c ft_split.c\
					ft_strtrim.c ft_striteri.c ft_strmapi.c
OBJS			= $(SRCS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS)
				ar rcs $(NAME) $(OBJS)

.PHONY:			all clean fclean re bonus
