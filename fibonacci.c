#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&n);
    int a=0;
    int b=1;
    printf("%d %d",a,b);
    for(int i=3;i<=n;i++){
        t=a+b;
        printf(" %d",t);
        a=b;
        b=t;
    }
}