#include <stdio.h>

int main() {
    int min , max , somatorio = 0;

    printf("Informe o limite mínimo : ");
    scanf("%d", &min);

    printf("Informe o limite máximo : ");
    scanf("%d", &max);

    if (min > max) {
        printf("Erro: O limite mínimo deve ser menor ou igual ao limite máximo.\n");
        return 0;
    }

    for (int i = min; i <= max; i++) {
        if (!(i % 2)) {
            somatorio += i;
        }
    }

    printf("%d", somatorio);

    return 0;
}
