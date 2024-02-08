#include<stdio.h>
int main (){
    int a,b,c;
    printf("ENTER 3 NUMBERS");
    scanf("%d%d%d",&a,&b,&c);
    switch (a>=b&&a>=c)//1:(b>=a)&&(b>=c)?2:3)//
    {
    case 1:
        printf("%d is the greatest",a);
        break;
    case 0:
        switch(b>=c){
            case 1:
            printf("%d is the greatest",b);
            break;
            case 0:
            printf("%d is the greatest",c);
            break;
        }
    }    
    return 0;
}