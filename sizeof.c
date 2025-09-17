#include <stdio.h>

int main() {
    // 1. Finding the size of basic data types
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of char: %zu byte\n", sizeof(char));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));

    // 2. Finding the size of a variable
    int myInt = 10;
    char myChar = 'A';
    float myFloat = 3.14f;
    double myDouble = 1.2345;

    printf("Size of myInt: %zu bytes\n", sizeof(myInt));
    printf("Size of myChar: %zu byte\n", sizeof(myChar));
    printf("Size of myFloat: %zu bytes\n", sizeof(myFloat));
    printf("Size of myDouble: %zu bytes\n", sizeof(myDouble));

    // 3. Finding the size of an array and calculating the number of elements
    int myArray[] = {1, 2, 3, 4, 5};
    printf("Size of myArray: %zu bytes\n", sizeof(myArray));
    printf("Number of elements in myArray: %zu\n", sizeof(myArray) / sizeof(myArray[0]));

    // 4. Finding the size of a structure
    struct Point {
        int x;
        int y;
        char label; // Padding might be added here for alignment
    };
    printf("Size of struct Point: %zu bytes\n", sizeof(struct Point));

    return 0;
}