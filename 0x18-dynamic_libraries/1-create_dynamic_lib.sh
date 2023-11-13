#!/bin/bash
gcc -c -fpic *.c -o all.o
gcc -shared all.o -o liball.so
