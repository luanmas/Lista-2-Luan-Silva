#include <stdio.h>
#include <string.h>

int main () {
    int n , maior;

    puts("Digite um número: ");
    scanf("%d" , &n);

    maior = n;

    do {
        printf("O maior número é : %d\n" , maior);

        puts("Digite um número : ");
        scanf("%d" , &n);    
        if (n > maior) maior = n;
    }while (n != 0);

    printf("Escolha inválida!\n");
}