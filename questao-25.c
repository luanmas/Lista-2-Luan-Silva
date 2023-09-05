#include <stdio.h>

int main() {
    int n;
    float pi = 0.0;
    float termo = 0.0;
    int sinal = 1;

    printf("Número de termos na série: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        termo = 4.0 / (2 * i - 1);
        pi += sinal * termo;
        sinal = -sinal;
        printf("Aproximação com %d termo(s): %.2f\n", i, pi);
    }

    return 0;
}
