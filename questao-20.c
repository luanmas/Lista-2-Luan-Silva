#include <stdio.h>

int main () {
    long long unsigned fatorialImpares;

    for (int i = 1; i <= 10 ; i++) {
        if(i % 2) {
           fatorialImpares = 1;
           for(int j = 1 ; j <= i ; j++) {
                fatorialImpares *= j;
           }
           printf("Fatorial %d! : %llu  \n" , i , fatorialImpares);
        }
    }

    return 0;
}