#!/bin/bash
gcc -c -Wall -Werror -fpic operations_in_c.c
gcc -shared -o 100-operations.so operations_in_c.o
