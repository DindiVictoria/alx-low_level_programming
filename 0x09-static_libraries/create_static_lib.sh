#!/bin/bash

# Compile all .c files in the current directory
gcc -c *.c

# Create the static library liball.a from the compiled object files
ar rcs liball.a *.o

