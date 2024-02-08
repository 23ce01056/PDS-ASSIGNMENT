#include<stdio.h>
int main(){
    int a;
    printf("ENTER A NUMBER :");
    scanf("%d",&a);
    switch (a%2)
    {
    case 0:
        printf("EVEN NUMBER");
        break;
    case 1:
        printf("ODD NUMBER");
        break;
    }
    return 0;
}