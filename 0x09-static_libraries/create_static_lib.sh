#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.;
ar -rc liball.a *.o;
