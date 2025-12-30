#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    srand(time(NULL));

    int a[100];
    int b[200];

    for (int i = 0; i < 100; i++) {
        b[i] = rand() % 100;
        a[i] = rand() % 100;
    }

    for (int i = 0; i < 100; i++) {
        b[100 + i] = a[i];
    }
    return 0;
}
