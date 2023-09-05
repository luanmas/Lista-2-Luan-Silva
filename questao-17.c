#include <stdio.h>

int main () {
    float celsius , fahrenheith;

    for ( celsius = 10 ; celsius <= 100 ; celsius+=10) {
        fahrenheith =  9.0 * celsius / 5.0 + 32.0;

        printf("Celsius : %.2f | " , celsius);
        printf("Fahrenheith : %.2f\n" , fahrenheith);
    }
}