#!/bin/bash
gcc -wall -pendatic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
