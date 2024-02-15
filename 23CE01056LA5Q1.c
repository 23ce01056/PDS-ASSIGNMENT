#include<stdio.h>
int main(){
    int p,a,count=0,sum=0;
    printf("ENTER A NUMBER :");
    scanf("%d",&a);
    p=a;
    for (int i=1;a!=0;i++){
        a=a/10;
        count++;
    }
    printf("Total number of digits in %d is %d",p,count);
    int arr[count];
    for (int i=0;i<=count-1;i++){
        arr[i]=p%10;
        p=p/10;
    }
    for(int i=0;i<=count-1;i++){
        for (int j=i+1;j<=count-1;j++){
            if(arr[i]==arr[j]) arr[j]=0;
        }
    }

    for (int i=0;i<=count-1;i++)
    {
        sum=sum+arr[i];    
    }
    printf("\nSUM OF UNIQUE DIGITS=%d",sum);
    return 0;
}