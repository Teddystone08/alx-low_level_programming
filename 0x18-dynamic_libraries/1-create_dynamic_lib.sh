#!/bin/bash
gcc -c -fPIC -Wall -pedantic -Werror -Wextra *.c -shared -o liball.so
