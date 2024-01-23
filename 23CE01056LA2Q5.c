#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the number :");
    scanf("%d",&a);
    (a&1)?printf("ODD NUMBER"):printf("EVEN NUMBER");
    return 0;
}