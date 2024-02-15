#include<stdio.h>

int main (){
    int a,b,c,sum=0;
    char ch='Y';
    for (int i=1;ch=='Y'||ch=='y';i++){
    printf("PROVIDE A NUMBER :");
    scanf("%d",&a);
    if (a%2==0) sum=sum+a;
    printf("\nDO YOU WANT TO CONTINUE?\n");
    scanf(" %c",&ch);
    if (ch=='N'||ch=='n') {
        printf("\nSUM=%d",sum); 
        break;
    }
    if (ch!='Y'&& ch!='N'&&ch!='y'&&ch!='n') {
        printf("\nENTER A VALID INPUT\n");
        printf("\nDO YOU WANT TO CONTINUE?\n");
        scanf(" %c",&ch);
    }     
    }
    return 0;

}