# cpp_c_struct
The cpp_c_struct program is based on the cpp_c project, however here we define a struct and pass it from the C++ program to the C program.  The cpp_c program was created as a "Hello World" to demonstrate how a C program can harness predefined logging methods defined in C++.  This is done by passing a function pointer from a C++ context to a C context.

## Concepts:
* C++/C integration: C++ code calling C code
* C++/C integration: Passing a C++ function pointer to C code 
* typedef: used to simplify a complex construct
* struct pointer used to pass a collection of arguments


## To build use g++:
g++ main.cpp program.c

## To run:
./a.out
