#!/bin/bash
gcc -c -FPIC *.c -o
gcc -shared *.o -o liball.so
