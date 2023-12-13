#include<stdio.h>
int main()
{
    float sal,hra,da;
    scanf("%f",&sal);
    scanf("%f",&hra);
    scanf("%f",&da);
    float pf=(sal*12)/100;
    float basicsal=(sal+hra+da+pf);
    printf("%.2f
",pf);
    printf("%.2f",basicsal);
    return 0;
}