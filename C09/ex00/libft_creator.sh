#!/bin/sh
COMPILER="cc"
SRC=*.c
FLAGS="-Wall -Wextra -Werror -c"
LIB="libft.a"
OBJ=*.o

$COMPILER $FLAGS $SRC
ar rc "$LIB" *.o
ranlib "$LIB"
rm $OBJ
