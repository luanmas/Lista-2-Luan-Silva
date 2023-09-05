#include <stdio.h>

int main() {
    int num;
    puts("Digite um número:");
    scanf("%d", &num);
    if(num < 10000 && num > 99999){
        puts("Número fora do padrão de 5 dígitos!");
    }
        int dezenaMilhar = num / 10000;
        int milhar = (num / 1000) % 10;
        int centena =  (num / 100) % 10;
        int dezena = (num / 10) % 10;
        int unidade = num % 10;
        int numInvertido = unidade * 10000 + dezena * 1000 + centena * 100 + milhar * 10 + dezenaMilhar * 1;
        if(numInvertido == num){
            printf("O número %d é um palíndromo!\n", num);
        }else{
            printf("O número %d não é um palíndromo\n", num);
        }

    return 0;
}