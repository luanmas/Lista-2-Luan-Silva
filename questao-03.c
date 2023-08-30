#include <stdio.h>
#include <string.h>

int main () {
    unsigned int num = 0;

    printf("Insira um número : ");
    scanf("%d" , &num);

    for(int i = num - 1 ; i >= 1 ; i--) {
        num *= i;
    }

    printf("FATORIAL : %u " , num );    
}