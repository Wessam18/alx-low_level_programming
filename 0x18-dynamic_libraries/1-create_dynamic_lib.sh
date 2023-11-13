#!/bin/bash
gcc -FPIC -c *.c -o
gcc -shared *.o -o liball.so
