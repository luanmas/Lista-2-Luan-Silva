#include <stdio.h>

int main () {
    int max , min;
    int somatorio = 0;

    printf("Insira um limite mínimo : ");
    scanf("%d" , &min);

    printf("Insira um limite máximo : ");
    scanf("%d" , &max);

    for(int i = min ; i <= max ; i++) {
        somatorio += i;
    }

    printf("Média aritmetica de %d até %d : %.2f\n" , min , max , (float)somatorio / max);

    return 0;
}