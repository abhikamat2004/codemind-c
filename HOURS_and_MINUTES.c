#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    int h=m/60;
    int M=m%60;
    printf("%d Hour(s) %d Minute(s)",h,M);
    return 0;
}