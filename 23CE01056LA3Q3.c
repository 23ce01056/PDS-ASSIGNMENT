#include<stdio.h>
int main(){
    int a,b,c,z;
    printf("ENTER THREE SIDES OF A TRIANGLE :");
    scanf("%d%d%d",&a,&b,&c);
    if ((a+b)>c&&(a+c)>b&&(b+c)>a) printf("TRIANGLE IS POSSIBLE");
    else printf("TRIANGLE IS NOT POSSIBLE");
    return 0;
    
}