#include <stdio.h>

int main() {
  int cateto1;
  int cateto2;
  int hipotenusa;

  for (cateto1 = 1; cateto1 < 500; cateto1++) {
    for (cateto2 = 1; cateto2 < 500; cateto2++) {
      for (hipotenusa = 1; hipotenusa < 500; hipotenusa++) {
        if (((cateto1 * cateto1) + (cateto2 * cateto2)) == hipotenusa * hipotenusa) {
          printf("Cateto1 : %d , Cateto2 : %d , Hipotenusa : %d \n\n", cateto1 , cateto2 , hipotenusa);
        }
      }
    }
  }
}
