#!/bin/sh -v
norminette *.c
gcc -c ft_putchar.c
gcc -c main.c
gcc -c rush01.c 
gcc ft_putchar.o main.o rush01.o -o a.out
