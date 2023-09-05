#include <stdio.h>

int main () {
    long unsigned int trigos = 1;
    long unsigned int somatorio = 0;

    for (int i = 0; i < 60; i++) {
        somatorio += trigos;
        trigos *= 2;
        printf("Somatório: %llu\n", somatorio);
    }

    return 0;
}