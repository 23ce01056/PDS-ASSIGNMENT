#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    b=a%2;
    (b==1&&a>100&&a<200)?printf("TRUE"):printf("FALSE");
    return 0;
}