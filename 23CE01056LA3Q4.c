#include<stdio.h>
int main (){
    float x1,y1,x2,y2,x3,y3 ,s1,s2;
    printf("Enter the coordinates of POINT 1 :");
    scanf("%f%f",&x1,&y1);
    printf("Enter the coordinates of POINT 2 :");
    scanf("%f%f",&x2,&y2);
    printf("Enter the coordinates of POINT 3 :");
    scanf("%f%f",&x3,&y3);
    s1=((y1-y2)/(x1-x2));
    s2=((y2-y3)/(x2-x3));
    if (s1==s2) printf("THE GIVEN POINTS LIE ON A LINE");
    else printf("THE GIVEN POINTS DO NOT LIE ON A LINE");
    return 0;
}