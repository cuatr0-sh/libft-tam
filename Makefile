# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/28 18:17:32 by agaliste          #+#    #+#              #
#    Updated: 2025/05/20 16:05:15 by asoria           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_tolower.c											\
	ft_toupper.c											\
	ft_isdigit.c													\
	ft_isprint.c													\
	ft_isalnum.c													\
	ft_isalpha.c													\
	ft_isascii.c													\
	ft_atoi.c													\
	ft_itoa.c													\
	ft_putchar_fd.c											\
	ft_putstr_fd.c											\
	ft_putendl_fd.c											\
	ft_putnbr_fd.c											\
	ft_memset.c											\
	ft_calloc.c											\
	ft_memchr.c											\
	ft_memcmp.c											\
	ft_bzero.c											\
	ft_memcpy.c											\
	ft_memmove.c										\
	ft_strlcat.c										\
	ft_strlcpy.c										\
	ft_strlen.c											\
	ft_strncmp.c										\
	ft_strchr.c										\
	ft_strrchr.c											\
	ft_strnstr.c										\
	ft_strdup.c											\
	ft_substr.c											\
	ft_striteri.c										\
	ft_strjoin.c										\
	ft_strtrim.c										\
	ft_strmapi.c										\
	ft_split.c											\

OBJS = ${SRCS:.c=.o}

INCLUDES = -I.

CC		= cc

CFLAGS = -Wall -Wextra -Werror

all: ${NAME} ${OBJS}

.c.o:
	${CC} ${CFLAGS} ${INCLUDES} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY: clean fclean all re
