//bitwise complement operator example
#include <stdio.h>
int main() {
   int a = 12;    // 1100 in binary 
   int result;

   result = ~a; // -13 (in binary: ...11110011, two's complement representation)
   printf("The result of ~%d is: %d\n", a, result);
   
   return 0;
}