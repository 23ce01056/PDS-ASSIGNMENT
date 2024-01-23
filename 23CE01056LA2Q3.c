#include<stdio.h>
int main(){
    int d,y,m,w,da,rem;
    printf("TYPE THE NUMBER OF DAYS :");
    scanf("%d",&d);
    y=d/365;
    rem=d-(y*365);
    m=rem/30;
    rem=rem-(m*30);
    

    
    w=rem/7;
    da=rem-(7*w);

    printf("For the given %d no. of days:\nNo. of years=%d\nNo. of months=%d\nNo. of weeks=%d\nNo. of days=%d",d,y,m,w,da);
    return 0;
}