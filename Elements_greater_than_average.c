#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",arr+i);
    }
    int sum=0;
    for(int i=0;i<a;i++){
        sum+=arr[i];
    }
    int avg=sum/a;
    int c=0;
    for(int i=0;i<a;i++){
        if(arr[i]>=avg) c++;
    }
    printf("%d",c);
}