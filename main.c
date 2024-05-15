// creating a basic C application
#include <stdio.h> // standard input/output library
#include <stdlib.h> // memory allocation function container

int main() // code inside it will only be executed
{
    // declare a variable
    int value;
    // read a value from the keyboard
    printf("enter a number:");
    scanf("%d", &value); // it put that integer into the memory address of value
    // printing the number
    printf("the value stored is : %d", value);
    return 0;  // code is finished
}

