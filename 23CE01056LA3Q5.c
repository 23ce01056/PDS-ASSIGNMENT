#include<stdio.h>
int main (){
    int x,fine;
    printf("ENTER NUMBER OF DAYS :");
    scanf("%d",&x);
    if (x<=5) {
        fine=1;
        printf("FINE IS %d",fine);
    }
    if (x>5&&x<=10) {
    fine=1+2;
    printf("FINE IS %d",fine);
    }
    if (x>10&&x<=30) {
        fine=1+2+5;
        printf("FINE IS %d",fine);
    }
    else printf("MEMBERSHIP CANCELLED");
    return 0;
}