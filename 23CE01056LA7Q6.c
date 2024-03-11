#include<stdio.h>
#include<string.h>
int main(){
    char arr[50],brr[50];
    printf("Enter a string:");
    gets(arr);
    printf("Enter a substring to be searched:");
    gets(brr);
    int len_str = strlen(arr);
    int len_substr = strlen(brr);

    for (int i = 0; i <= len_str - len_substr; i++) {
        int j;
        for (j = 0; j < len_substr; j++)
            if (arr[i + j] != brr[j]) break;

        if (j == len_substr) {
            printf("Substring is present");
            return 0;
    }

    
}
    printf("Substring is not present");

    return 0;
}