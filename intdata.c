#include<stdio.h>
int main()
{
    signed short int num=32768;
    printf("num value is :%d",num);
    printf("Size of int: %zu bytes\n", sizeof(num));
    return 0;
}