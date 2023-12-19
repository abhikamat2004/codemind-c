#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=a,rev=0;
    while (a!=0){
        rev=(rev*10)+a%10;
        a=a/10;
    }
    if(rev==b) printf("Palindrome");
    else printf("Not Palindrome");
}