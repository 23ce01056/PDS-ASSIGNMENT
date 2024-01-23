#include<stdio.h>
int main(){
    int a,b,c;
    printf("ENTER YEAR :");
    scanf("%d",&a);
    b=a%4;
    ((a%4==0)&&(a%100!=0)||(a%400==0))?printf("LEAP YEAR"):printf("NOT A LEAP YEAR");
    return 0;

}