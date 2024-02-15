#include<stdio.h>
int main(){
    int a,b,q=0;
    printf("ENTER DIVIDEND:");
    scanf("%d",&a);
    printf("ENTER DIVISOR :");
    scanf("%d",&b);
    for(int i=1;(a-b)>0;i++)
        {
        a=a-b;
        q++;
        }
    printf("QUOTIENT=%d,REMAINDER=%d",q,a);
    return 0;   
}