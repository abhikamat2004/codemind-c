#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",arr+i);
    }
    int e=0,o=0;
    for(int i=0;i<a;i++){
        if(i%2==0) e+=arr[i];
        else o+=arr[i];
    }
    if(o<e)
    printf("%d",e-o);
    else printf("%d",o-e);
}