#include<stdio.h>
int main()
{
    int a,hours,minutes,seconds;
    scanf("%d",&a);
    hours=(a/3600);
    minutes=(a-(3600*hours))/60;
    seconds=(a-(3600*hours)-(minutes*60));
    printf("H:M:S-%d:%d:%d",hours,minutes,seconds);
}