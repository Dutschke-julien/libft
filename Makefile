# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/27 14:34:08 by jdutschk          #+#    #+#              #
#    Updated: 2022/05/26 19:01:24 by jdutschk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#---------------------------------------------------------------|
#  _        _____   ____    ______   _______     _  _     ___   |
# | |      |_   _| |  _ \  |  ____| |__   __|   | || |   |__ \  |
# | |        | |   | |_) | | |__       | |      | || |_     ) | |
# | |        | |   |  _ <  |  __|      | |      |__   _|   / /  |
# | |____   _| |_  | |_) | | |         | |         | |    / /_  |
# |______| |_____| |____/  |_|         |_|         |_|   |____| |
#----------------------VARIABLE---------------------------------|

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra -g3

MAIN = main.c libft.h libft.a

RM = rm -f

LINK = ar rcs

#----------------------SOURCES FILES----------------------

SRC_CHECK = check/ft_isalnum.c\
	  		check/ft_isalpha.c\
			check/ft_isdigit.c\
			check/ft_isascii.c\
	  		check/ft_isprint.c

SRC_CONVERT = convert/ft_atoi.c\
			  convert/ft_itoa.c\
			  convert/ft_tolower.c\
			  convert/ft_toupper.c

SRC_FD = fd_function/ft_putchar_fd.c\
		 fd_function/ft_putnbr_fd.c\
		 fd_function/ft_putendl_fd.c\
		 fd_function/ft_putstr_fd.c

SRC_MEM = mem/ft_bzero.c\
		  mem/ft_calloc.c\
		  mem/ft_memchr.c\
		  mem/ft_memcmp.c\
		  mem/ft_memcpy.c\
		  mem/ft_memmove.c\
		  mem/ft_memset.c

SRC_CHAINED = chain_list/ft_lstnew.c\
			  chain_list/ft_lstadd_front.c\
			  chain_list/ft_lstsize.c\
			  chain_list/ft_lstlast.c\
			  chain_list/ft_lstadd_back.c\
			  chain_list/ft_lstdelone.c\
			  chain_list/ft_lstclear.c\
			  chain_list/ft_lstiter.c \
			  chain_list/ft_lstmap.c

SRC_STR = str/ft_strchr.c\
		  str/ft_strdup.c\
		  str/ft_striteri.c\
		  str/ft_strlcat.c\
		  str/ft_strlcpy.c\
		  str/ft_strlen.c\
		  str/ft_strncmp.c\
		  str/ft_strnstr.c\
		  str/ft_strrchr.c\
		  str/ft_substr.c\
		  str/ft_strtrim.c\
		  str/ft_split.c\
		  str/ft_strjoin.c\
		  str/ft_strjoin_free.c\
		  str/ft_strmapi.c

SRC_FT_PRINTF = printf/src/ft_print_ptr.c\
 				printf/src/ft_printf.c\
				printf/src/ft_printf_hex.c\
				printf/src/ft_printf_str.c\
				printf/src/ft_printf_nbr.c

SRC_GNL =	Get_next_line/get_next_line.c

ALL_SRC = $(SRC_CHECK)\
		  $(SRC_CONVERT)\
		  $(SRC_FD)\
		  $(SRC_MEM)\
		  $(SRC_FT_PRINTF)\
		  $(SRC_STR)\
		  $(SRC_GNL)\
		  $(SRC_CHAINED)

OBJS = $(ALL_SRC:.c=.o)

#----------------------RULES----------------------

all : $(NAME)

	
.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME) : $(OBJS)
	$(LINK) $(NAME) $(OBJS)





clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)


re : fclean all

