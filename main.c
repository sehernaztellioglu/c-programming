#include <ctype.h>
#include <iso646.h>
#include <stdbool.h>
#include <stdio.h>


int main() {
    int x;
    int sum1 = 0;

    while (x != -1) {
        printf("bir sayi giriniz\n");
        scanf("%d", &x);
        sum1 = sum1 + x;
        printf("%d\n", sum1);
    }
}
