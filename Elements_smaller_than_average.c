#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",arr+i);
    }
    int c=0;
    for(int i=0;i<a;i++){
      c+=arr[i];
    }
    int avg=c/a;
    int p=0;
    for(int i=0;i<a;i++){
        if(avg>=arr[i]) p++;
    }
    printf("%d",p);
}