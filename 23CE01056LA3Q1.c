#include<stdio.h>
int main (){
    int x;
    printf("Enter the Integer :");
    scanf("%d",&x);
    if (x==0) printf("ZERO");
    if (x>0) printf("POSITIVE");
    else printf("NEGATIVE");
    return 0;
}