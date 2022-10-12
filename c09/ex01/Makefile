cc=cc
INCDIRS=-I
CFLAGS=-Wall -Wextra -Werror
NAME=libft.a

SOURCES=./srcs
HEADERS=./includes
CFILES= ft_putchar.c \
		ft_putstr.c \
		ft_strcmp.c \
		ft_strlen.c \
		ft_swap.c
		
SOURCEFOLD = $(patsubst %.c, $(SOURCES)/%.c, $(CFILES))
OBJECTFILES = $(CFILES:.c=.o)
OBJECTS = $(patsubst %.o, $(SOURCES)/%.o, $(OBJECTFILES))

all: $(NAME)

$(NAME): $(SOURCES)/$(OBJECTS)
	ar -rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

$(SOURCES)/%.o: $(SOURCES)/%.c
		$(CC) $(CFLAGS) -c $^ $(INCDIRS)$(HEADERS) -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
