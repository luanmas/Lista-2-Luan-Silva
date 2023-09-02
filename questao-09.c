#include <stdio.h>

int main () {
    long long int termoAtual = 1;
    long long int termoAnterior = 0;
    long long int resultado;

    for (int i = 3; i <= 20; i++) {
        resultado = termoAnterior + termoAtual;
        termoAnterior = termoAtual;
        termoAtual = resultado;
    }

    printf("Vigesímo Termo : %d" , resultado);
}