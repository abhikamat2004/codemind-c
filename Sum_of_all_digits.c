#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int s=0;
    for(;a>0;a=a/10){
        int r=a%10;
        s+=r;
    }
    printf("%d",s);
}