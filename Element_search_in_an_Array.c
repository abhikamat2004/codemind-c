#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",arr+i);
    }
    int b;
    int c=0;
    scanf("%d",&b);
    for(int i=0;i<a;i++){
        if(arr[i]==b)c++;
    }
    if(c>0)
    printf("True");
    else printf("False");
}