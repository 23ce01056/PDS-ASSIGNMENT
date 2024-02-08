#include<stdio.h>
int main(){
    int b ; 
    float in,a,inam;
    printf("ENTER CREDIT BALANCE:");
    scanf("%f",&a);
    printf("ENTER CREDIT SCORE:");
    scanf("%d",&b);
    switch(b>=750&&b<=1000)
    {
        case 1:
             in=10;
             inam=in*a/100;
             printf("INTEREST AMOUNT IS %.2f CALCULATED AT %.0f PERCENT",inam,in);
             break;
        case 0:
            switch (b<750&&b>=600)
            {
            case 1:
                in=12;
                inam=in*a/100;
                printf("INTEREST AMOUNT IS %.2f CALCULATED AT %.0f PERCENT",inam,in);
                break;
            case 0:
                switch (b<600&&b>0)
                {
                case 1:
                    in=15;
                    inam=in*a/100;
                    printf("INTEREST AMOUNT IS %.2f CALCULATED AT %.0f PERCENT",inam,in);
                    break;
                default:
                printf("ENTER A VALID SCORE BETWEEN 0 TO 1000");
                }
            }
        
    
    
    }
    return 0;

}