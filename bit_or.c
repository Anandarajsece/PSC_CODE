//bitwise OR operator example
#include <stdio.h>
int main() {
   int a = 12;    // 1100 in binary 
   int b = 25;    // 11001 in binary
   int result;

   result = a | b; // 29 (11101 in binary)
   printf("The result of %d | %d is: %d\n", a, b, result);
   
   return 0;
}