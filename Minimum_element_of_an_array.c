#include<stdio.h>
#include<limits.h>
int main()
{
    int a;
    int c=INT_MAX;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){
        if(c>arr[i]){
            c=arr[i];
        }
    }
    printf("%d",c);
    
}