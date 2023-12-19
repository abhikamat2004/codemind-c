#include<stdio.h>
int main()
{
    int a,rev=0;
    scanf("%d",&a);
    for(;a>0;a=a/10){
        int r=a%10;
        rev=(rev*10)+r;
    }
    printf("%d",rev);
}