#include<stdio.h>
#include<math.h>
int main()
{
    int P,R,T;
    float A,CI;
    scanf("%d%d%d",&P,&R,&T);
    A=P*((pow((1+R/100.0),T)));
    CI=A-P;
    printf("%.2f",CI);
    return 0;
}