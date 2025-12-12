#include <ctype.h>
#include <iso646.h>
#include <stdbool.h>
#include <stdio.h>


int main() {
    float arr[5];
    float average = 0;

    arr[0] = 4;
    arr[1] = 9;
    arr[2] = 8;
    arr[3] = 3;
    arr[4] = 5;

    for (int i = 0; i < 5; i++) {
        average = average + arr[i];
    }

    printf("average of entered numbers: %f", average / 2);

    return 0;
}
