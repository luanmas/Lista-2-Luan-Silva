#include <stdio.h>

int main() {
  for (int decimal = 1; decimal <= 256; decimal++) {
    printf("================\n");
    printf("Decimal : %d\n" , decimal);
    printf("Binário : %08b\n", decimal);
    printf("Octal : %o\n", decimal);
    printf("Hex : %x\n", decimal);
    printf("=================\n");
  }
}