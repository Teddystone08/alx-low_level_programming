#!/bin/bash
gcc -c -fPIC *.c
ar rcs liball.a *.o
ranlib liball.a
