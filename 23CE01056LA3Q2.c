#include<stdio.h>
int main (){
    int a,b,c,z;
    printf("Enter Three numbers :");
    scanf("%d%d%d",&a,&b,&c);
    if (a>=b){
        z=a;
    } 
    else z=b;
    if (c>=z)
    {
        z=c;
    }
    printf("The Greatest of the %d,%d and %d is %d",a,b,c,z);
    return 0;
}