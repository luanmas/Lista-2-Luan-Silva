#include <stdio.h>

int main () {
  int num;
  int maior, menor;

  printf("Escreva um número : ");
  scanf("%d", &num);

  maior = menor = num;

  while (num >= 0 && num % 2 != 0) {
    printf("Escreva um número : ");
    scanf("%d", &num);

    if (num > maior)
      maior = num;

    if (num < menor)
      menor = num;
  }

  printf("Maior número: %d\n", maior);
  printf("Menor número: %d\n", menor);
  printf("%d x %d = %d\n", maior, menor, maior * menor);
}