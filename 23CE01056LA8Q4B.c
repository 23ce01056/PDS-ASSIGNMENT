#include <stdio.h>
#include <limits.h>

int main() {
    int a;
    printf("Enter the size of array:");
    scanf("%d", &a);
    int ar[a];
    int *p = ar;

    for (int i = 0; i < a; i++) {
        t:
        printf("Enter %d element lying between [1,%d]: ", i + 1, a - 1);
        scanf("%d", (p + i));
        if ((*(p + i) <= (a - 1)) && (*(p + i) >= 1) == 0) {
            printf("Range exceeded\n");
            goto t;
        }
    }

    
    printf("\nNumber(s) that is/are repeated : ");
    for (int i = 0; i < a; i++) {
        int dup = 0;
        for (int j = 0; j < i; j++) {
            if (*(p + i) == *(p + j)) {
                dup = 1;
                break;
            }
        }
        if (!dup) {
            for (int j = i + 1; j < a; j++) {
                if (*(p + i) == *(p + j)) {
                    printf("%d ", *(p + i));
                    break;
                }
            }
        }
    }

    return 0;
}