#include <stdio.h>
int main()
{
char str[10];
int num = 7;
sprintf(str, "%04d", num);
printf("%s", str);

}
