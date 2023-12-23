#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    int odd=0;
    for(int i=0;i<a;i++){
        scanf("%d",arr+i);
        if(arr[i]%2!=0) odd=i;
    }
    printf("%d",odd);
}