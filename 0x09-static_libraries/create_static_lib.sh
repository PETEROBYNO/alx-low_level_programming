#!/bin/bash
gcc -Wall -waxtra -werror -pedantic -c *.c
ar rc liball.a *.o
