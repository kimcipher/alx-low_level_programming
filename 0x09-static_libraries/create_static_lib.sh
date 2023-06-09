#!/bin/bash

# Compile each .c file into an object file
gcc -c *.c

# Create the static library
ar -rc liball.a *.o

# Display the contents of the library
ar -t liball.a
