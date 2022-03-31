########################################################################
####################### My Makefile ##############################
########################################################################

# Compiler settings
CC = gcc
CFLAGS = -Wall -Wextra -Werror
 

# Makefile settings
NAME = push_swap
PUSHSRC = sorts/sort_three.c sorts/sort_two.c sorts/sort_type.c sorts/sort_5.c tools/atoi_check.c tools/error.c tools/is_duplicated.c \
tools/is_sorted.c tools/stack_operations.c push_swap.c moves/pa.c sorts/sort_four.c sorts/min.c\
moves/pb.c	moves/ra.c	moves/rb.c	moves/rr.c moves/sa.c tools/indexing.c tools.c\
moves/sb.c	moves/ss.c	moves/rra.c moves/rrb.c moves/rrr.c sorts/sort_100.c sorts/insertion_sort.c split.c
HEADER = push_swap.h


############## The referencing #############

PUSHOBJ = ${PUSHSRC:.c=.o}


# UNIX-based OS variables & settings

RM = rm -rf

########################################################################
####################### Targets beginning here #########################
########################################################################

all: $(NAME)


# Builds the app

$(NAME)  : $(PUSHOBJ) $(HEADER)
	$(CC) $(CFLAGS) $(PUSHOBJ) -I $(HEADER) -o $(NAME)


# Building rule for .o files and its .c


################### Cleaning rules for Unix-based OS ###################

clean:
			$(RM) $(PUSHOBJ)

fclean:		clean
			$(RM) push_swap 

re:			fclean all

.PHONY:		all clean fclean re 