//float demo
#include<stdio.h>
int main()
{
    float num=3.402823;
    printf("num value is :%f\n",num);
    printf("Size of float: %zu bytes\n", sizeof(num));


    //double demo
    double num1=1.7976931348623157;
    printf("num1 value is :%lf\n",num1);
    printf("Size of double: %zu bytes\n", sizeof(num1));


    //long double demo
    long double num2=1.18973149535;
    printf("num2 value is :%Lf\n",num2);
    printf("Size of long double: %zu bytes\n", sizeof(num2));

    return 0;
}