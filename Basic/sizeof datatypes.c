#include <stdio.h>

int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;
    
/* `` We should use “%zu” to print the variables of size_t length.
We can use “%d” also to print size_t variables, it will not show any error.
The correct way to print size_t variables is use of “%zu”. ``

`` In “%zu” format, z is a length modifier and u stand for unsigned type. `` */    
    
    printf("\nSize of int : %d bytes",sizeof(intType));
    printf("\nSize of float : %d bytes",sizeof(floatType));
    printf("\nSize of double : %d bytes",sizeof(doubleType));
    printf("\nSize of char : %d bytes",sizeof(charType));
    return 0;
}