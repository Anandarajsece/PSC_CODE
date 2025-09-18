//typedef  example in C
#include<stdio.h>
int main()
{
    typedef int INT;
    INT num=10;
    printf("num value is :%d",num);
    printf("Size of int: %zu bytes\n", sizeof(num));
    return 0;
}