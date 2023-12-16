#include<stdio.h>
int main (){
    float a,da,hr;
    scanf("%f",&a);
    if (a<=10000){
        da=a*0.80;
        hr=a*0.20;
    }
    else if (a<=20000){
        da=a*0.90;
        hr=a*0.25;
    }
    else {
        da=a*0.95;
        hr=a*0.30;
        
    }
    printf("%.2f",a+da+hr);
}