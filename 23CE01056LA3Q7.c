#include<stdio.h>
int main (){
    int mo,n,k;
    float fs,w;
    printf("Enter marks obtained:");
    scanf("%d",&mo);
    printf("Enter no of classes attended:");
    scanf("%d",&n);
    printf("Enter total no of classes attended:");
    scanf("%d",&k);
    w=((float)n)/((float)k);
    fs=mo*w;
    if (fs>=90) printf("GRADE-EX");
    else if(fs>=80) printf("GRADE-A");
    else if(fs>=70) printf("GRADE-B");
    else if(fs>=60) printf("GRADE-C");
    else if(fs>=50) printf("GRADE-D");
    else if(fs>=40) printf("GRADE-P");
    else printf("FAIL");
    return 0;
}