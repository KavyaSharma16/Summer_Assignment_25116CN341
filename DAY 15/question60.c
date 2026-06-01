#include <stdio.h>

int main() {
    int arr[100], n, i, count = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    /* Count non-zero elements */
    int temp[100], k = 0;

    for(i = 0; i < n; i++) {
        if(arr[i] != 0) {
            temp[k++] = arr[i];
        }
    }

    /* Add zeroes at the end */
    while(k < n) {
        temp[k++] = 0;
    }

    printf("Array after moving zeroes to end:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}