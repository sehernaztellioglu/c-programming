#include <ctype.h>
#include <iso646.h>
#include <stdbool.h>
#include <stdio.h>


int main() {
    int arr[5];
    int x;
    int occurence = 0;

    arr[0] = 4;
    arr[1] = 2;
    arr[2] = 6;
    arr[3] = 7;
    arr[4] = 4;

    printf("enter a number:\n ");
    scanf("%d", &x);

    for (int i = 0; i < 5; i++) {
        if (arr[i] == x) {
            occurence++;
        }
    }

    printf("the number of occurences of %d is %d", x, occurence);

    return 0;
}
