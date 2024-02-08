#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("ENTER TWO NUMBERS :");
    scanf("%d%d",&a,&b);
    printf("ENTER OPERATION TO BE PERFORMED AS PER FOLLOWING:");
    printf("\nENTER 1 FOR ADDITION\nENTER 2 FOR SUBSTRACTION\nENTER 3 FOR MULTIPLICATION\nENTER 4 FOR DIVISION\n");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        d=a+b;
        printf("DESIRED OUTPUT IS %d",d);
        break;
    case 2:
        d=a-b;
        printf("DESIRED OUTPUT IS %d",d);
        break;
    case 3:
        d=a*b;
        printf("DESIRED OUTPUT IS %d",d);
        break;
    case 4:
        d=a/b;
        e=a%b;
        printf("QUOTIENT IS %d AND REMAINDER IS %d",d,e);
        break;
    }
    return 0;
}