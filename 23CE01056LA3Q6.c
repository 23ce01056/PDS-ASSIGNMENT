#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sq=n*n;
    int c=0;
    while( sq>0){
        int d=sq%10;
        c++;
        sq=(int)(sq/10);
    }
    sq=n*n;
    int a,b,i=1;
    while(i<c){
        a=sq%(int) (pow(10,i));
        b=(int)(sq/pow(10,i));
        if((a+b)==n&&a!=0&&b!=0){
            
            printf("Yes %d is a Karpekar Number",n);
        }
        i++;
    }
    return 0;
}