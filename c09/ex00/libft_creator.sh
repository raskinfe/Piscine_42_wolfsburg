#!/bin/sh
gcc -Wall -Werror -Wextra -c *.c
ar rcs libft.a *.o
ranlib libft.a
