#include <stdio.h>

int main() {
    unsigned char X, Y;

    printf("Digite o valor de X : ");
    scanf("%hhu", &X);
    
    do {
        printf("Digite o valor de Y : ");
        scanf("%hhu", &Y);
    } while (Y < 5);

    unsigned char mask = 0b00111110;

    for (int i = -4; i <= 4; i++) {
        if (i == 0) continue;

        int position = Y + i;
        if (position >= 0 && position <= 7) {
            if (X & (1 << (7 - position))) {
                X |= (1 << (7 - position));
            } else {
                X &= ~(1 << (7 - position));
            }
        }
    }

    printf("Valor de X : %u\n", X);

    return 0;
}
