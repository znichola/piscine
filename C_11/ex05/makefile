# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: znichola <znichola@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/30 21:07:56 by znichola          #+#    #+#              #
#    Updated: 2022/06/30 22:17:42 by znichola         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# the name of the NAME program
NAME	= do-op

# other source files and the associated object files (this can be blank)
SRC		= ft_ops.c ft_util.c main.c
OBJ		= $(SRC:.c=.o)

# special include directories
INCLUDE = .

# select the compiler and flags
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
LIB		= ar rcs
RM		= rm -f

# specify how to compile the .c files
.c.o :
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

# if you type 'make' without arguments, this is the default
all : $(NAME)

# specify how to compile the NAME
$(NAME): $(OBJ)
		$(CC) $(CFLAGS) -o ${NAME} ${OBJ}

# remove binaries
clean :
		${RM} $(OBJ)

# # remove binaries and other junk
fclean : clean
		${RM} ${NAME}

re : fclean all

.PHONY: all re clean fclean