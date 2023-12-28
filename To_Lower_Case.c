#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    scanf("%[^
]s",ch);
    for(int i=0;i<=strlen(ch);i++){
        if(ch[i]>=65 && ch[i]<=90){
           ch[i]=ch[i]+32;
        }
    }
    printf("%s",ch);
}