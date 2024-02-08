#include<stdio.h>
int main(){
    int a,p;
    printf("ENTER A THREE DIGIT NUMBER :");
    scanf("%d",&a);
    p=a;
    int s=0,w=0,t=0;
        s=a%10;
        a=a/10;
        w=a%10;
        a=a/10;
        t=a%10;
    switch(p>=100&&p<=999)
    {
        case 1:
        switch(p-(s*s*s)-(w*w*w)-(t*t*t))
        {
        case 0:
        printf("YES , IT IS AN ARMSTRONG NUMBER");
        break;

        default:
        printf("NOT AN ARMSTRONG NUMBER");
        break;
       }
       break;
        default:
        printf("ENTERED NUMBER IS NOT A 3 DIGIT NUMBER");
        break;
    }
    return 0;
}