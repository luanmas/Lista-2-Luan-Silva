#include <stdio.h>

int main() {
    int num , algarismo , count = 0;

    printf("Insira um número inteiro: ");
    scanf("%d", &num);

    while (num > 0) {
        algarismo = num % 10;

        if (algarismo == 7) {
            count++;
        }

        num /= 10;
    }

    printf("Quantidade de dígitos 7 no %d: %d\n", num , count);

    return 0;
}
