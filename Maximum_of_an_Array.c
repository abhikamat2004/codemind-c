#include<stdio.h>
int main()
{
    int a,c=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=1;i<a;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    printf("%d",max);
}