#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    float bv,cv,net;
    int r;
    printf("Enter Meal Price: ");
    scanf("%f",&a);
    printf("Enter Tip Percentage: ");
    scanf("%f",&b);
    printf("Enter Tax Percentage: ");
    scanf("%f",&c);
    bv=(b*a)/100;
    cv=(c*a)/100;
    net=a+bv+cv;
    r=round(net);
    printf("Tip at %.2f percent and Tax at %.2f percent for the Meal price %.2f are %.2f and %.2f",b,c,a,bv,cv);
    printf("\nNET AMOUNT IS %d",r);
    return 0;

}