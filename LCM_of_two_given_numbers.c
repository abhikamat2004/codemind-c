#include<stdio.h>
int main()
{
    int a,b,s;
    scanf("%d %d",&a,&b);
    int h=1;
    if(a<b){
        s=a;
    }
    else{
        s=b;
    }
    for (int i=1;i<=s;i++){
        if(a%i==0 && b%i==0){
            h=i;
        }
    }
    int l=(a*b)/h;
    printf("%d",l);
}