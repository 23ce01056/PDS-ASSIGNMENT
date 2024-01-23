#include<stdio.h>
int main(){
    int a,b,c,max;
    printf("ENTER THREE NUMBERS :");
    scanf("%d%d%d",&a,&b,&c);
    max=a>b?a:b;
    max=max>c?max:c;

    printf("Maximum of the given three numbers %d,%d and %d is %d",a,b,c,max);
    return 0;

}