CC=gcc
CFLAGS=-Wall -Werror -Wextra
CFILES=ft_display_file.c

OBJECT = ft_display_file

all: $(OBJECT)

$(OBJECT): $(CFILES)
		$(CC) $(CFLAGS) -c $(CFILES) 
		gcc -o $(OBJECT) ft_display_file.o

clean:
	rm -rf ft_display_file.o

fclean: clean
	rm -rf $(OBJECT)

re: all fclean