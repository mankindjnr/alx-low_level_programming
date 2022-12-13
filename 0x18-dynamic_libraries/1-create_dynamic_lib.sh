#!/bin/bash
gcc -g -Wall -fPIC -Werror -Wextra -pedantic *.c -shared -o liball.so
