#include <ctype.h>
#include <iso646.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int sales[4][5] = {
        3, 5, 8, 4, 7,
        3, 4, 6, 8, 4,
        4, 1, 5, 7, 4,
    };


    int largest = sales[0][0];
    int smallest = sales[0][0];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (sales[i][j] > largest) {
                largest = sales[i][j];
            }
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (sales[i][j] < smallest) {
                smallest = sales[i][j];
            }
        }
    }
    printf("The largest sequence is: %d\n", largest);
    printf("The smallest sequence is: %d\n", smallest);

    return 0;
}
