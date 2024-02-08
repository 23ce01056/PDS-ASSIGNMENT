#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("ENTER THE AGE :");
    scanf("%d",&a);
    switch (a>=60)
    {
    case 0:
        switch (a>=13&&a<=59)
        {
        case 1:
            printf("TICKET PRICE IS 50");
            break;
        case 0:
            switch (a>=5&&a<=12)
            {
            case 1:
                printf("TICKET PRICE IS 20");
                break;
            case 0:
                printf("NO TICKET REQUIRED");
                break;
            }
        break;
        }
        break;
    case 1:
        printf("TICKET PRICE IS 40 AT 20PERCENT CONSESSION AS SENIOR CITIZEN");
        break;
    }
    return 0;
}