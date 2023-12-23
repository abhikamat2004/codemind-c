#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int e=0,o=0;
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",arr+i);
    }
    for(int i=0;i<a;i++){
        if(arr[i]%2==0)e+=arr[i];
        else o+=arr[i];
    }
    int r;
    if(e<o)r=o-e;
    else r=e-o;
    printf("%d",r);
}