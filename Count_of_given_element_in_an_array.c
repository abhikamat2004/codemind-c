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
    scanf("%d",&b);
    int c=0;
    for(int i=0;i<a;i++){
        if(arr[i]==b)c++;
    }
    printf("%d",c);
}