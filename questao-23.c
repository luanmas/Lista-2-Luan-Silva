#include <stdio.h>

int main() {
  int num = 5;
  // usei o 5 de exemplo pra ser mais prático

  printf("Número usando o pre -- : %d\n", ++num);
  printf("Usando na atrás o programa ler o incremento e o vai até o fim do número assim ele consegue pegar o valor do número já incrementado\n\n");
  num = 5;
  printf("Número usando o pos -- : %d\n", num++);
  printf("Usando na frente o programa ler primeiro o número e não terminar de ler o resto pois ele já encontrou o inteiro que ele queria");
}