#include <stdio.h>
#include <string.h>

int main () {
    unsigned int alturaPedro = 110;
    unsigned int alturaJose = 150;
    unsigned int taxaPedro = 3;
    unsigned int taxaJose = 2;
    unsigned int contador = 0;

    //152 jose , 154 , 156
    //113 pedro ,116 , 119
    // 39

    while(alturaPedro < alturaJose) {
        alturaPedro += taxaPedro;
        alturaJose += taxaJose;
        contador++;
    }

    printf("Altura do Pedro : %d\n" , alturaPedro+=3);
    printf("Altura do Jose : %d\n" , alturaJose);
    printf("Demorou %d anos\n" , contador);
}