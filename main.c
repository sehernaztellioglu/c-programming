#include <ctype.h>
#include <iso646.h>
#include <stdbool.h>
#include <stdio.h>


int main() {
    int arr[5];
    int sum1 = 0;

    printf("Enter 5 diff numbers:\n ");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < 5; j++) {
        sum1 += arr[j];
    }
    printf("Sum of entered numbers: %d", sum1);

    return 0;
}
