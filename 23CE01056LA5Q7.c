#include<stdio.h>
int main(){
    int arr[10]={9,8,500,6,2,11,48,26,900,12};
    int temp;
    for( int i=0;i<=9;i++){
        for (int j=0;j<=8-i;j++){
            if(arr[j]>=arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
    }
    }
    for(int i=0;i<=9;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
