#!/bin/bash
rm -f *.o libft.a
gcc -Wall -Wextra -Werror -c *.c
ar rc libft.a *.o
ranlib libft.a
echo "Library libft.a created successfully!"
