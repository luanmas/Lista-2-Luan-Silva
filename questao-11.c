#include <stdio.h>
#include <math.h>

int main() {
    int min, max;

    printf("Informe o limite mínimo : ");
    scanf("%d", &min);

    printf("Informe o limite máximo : ");
    scanf("%d", &max);

    if (min > max) {
        printf("Erro: O limite mínimo deve ser menor ou igual ao limite máximo.\n");
        return 0;
    }

    for (int i = min; i <= max; i++) {
        if (i % 4 == 0) {
            float result = i * i;
            printf("%.2f ", result);
        }
    }

    return 0;
}
