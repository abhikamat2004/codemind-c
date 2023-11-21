#include<stdio.h>
int main()
{
    int base1,base2,height;
    float area;
    scanf("%d %d %d",&base1,&base2,&height);
    area=1.0/2*(base1+base2)*height;
    printf("%.4f",area);
    return 0;
}