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
    for(int i=0;i<a;i++){
        if(arr[i]%2==0) b=i;
    }
    printf("%d",b);
}