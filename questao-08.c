#include <stdio.h>

int main () {
    float entrada , valor = 0.0;
    int parcela = 0;

    printf("Insira um valor : ");
    scanf("%f" , &valor);

    parcela = (int)valor / 3;
    entrada = valor - (float)parcela * 2.0;

    printf("Entrada de %.2f\n" , entrada);
    printf("Duas parcelas de %d\n", parcela);
}  