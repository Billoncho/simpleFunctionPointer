/*
Author: Billy Gene Ridgeway
Date: Sept. 16th. 2022
Purpose: Learn about declaring function pointers in C and why using typedef is important.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int (*PFI) (int);

// Our sample function.
int square(int a) {
    return a*a;
}

int main() {
    //int (*test) (int);    // Without typedef you can get errors.
    PFI test;
    char input[50];
    int value;
    int result;

    // Set the function pointer "test" to the address of the function "square".
    test = square;

    // Try it out.
    printf("\nEnter the number to square ... ");
    value = atoi(gets(input));
    result = test(value);
    printf("\nThe result is %d.\n", result);
    return 0;
}