#!/bin/bash
gcc -c -fPIC calc.c
gcc -shared -o 100-operations.so calc.o
rm *.o
