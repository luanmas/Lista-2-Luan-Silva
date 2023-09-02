#include <stdio.h>
#include <math.h>

int main () {
    int base = 3;

    for (int i = 0 ; i <= 7 ; i++) {
        printf("%d ^ %d = %.2f\n" , base , i , pow(base , i));
    }
}