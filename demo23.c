//enum
#include<stdio.h>
int main()
{
    enum months{jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};
    enum months m;
    m=mar;
    printf("%d",m);
    return 0;
}