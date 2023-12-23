#include<stdio.h>
int main()
{
    int a,c=0,x=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",arr+i);
        c+=arr[i];
    }
    int d=c/a;
    for(int i=0;i<a;i++){
        if(d==arr[i])x++;
    }
    if(x>0)
    printf("True");
    else printf("False");
}