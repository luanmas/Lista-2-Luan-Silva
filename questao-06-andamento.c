// 5 - Paula
// 7 - Renata
// 0 - voto em branco

#include <stdio.h>

int main () {
    int voto;
    int votosRenata = 0;
    int votosPaula = 0;
    int votosBrancos = 0;
    int confirmacaoVoto;

    puts("Menu\n");
    puts("Paula - 5\n");
    puts("Renata - 7\n");
    puts("Voto branco - 0\n");

    printf("Insira seu voto : ");   
    scanf("%d" , &voto);

    do {
        switch(voto) {
            case 5 :
            printf("Você tem certeza que quer votar na Paula ?");
            printf("1 - Sim | 2 - Não");
            scanf("%d" , &confirmacaoVoto);
            confirmacaoVoto = voto;
            break;

            case 7 :
            printf("Você tem certeza que quer votar na Renata ?");
            printf("1 - Sim | 2 - Não");
            scanf("%d" , &confirmacaoVoto);
            confirmacaoVoto = voto;
            break;

            case 0 :
            printf("Você tem certeza que quer votar branco ?");
            printf("1 - Sim | 2 - Não");
            scanf("%d" , &confirmacaoVoto);
            confirmacaoVoto = voto;
            break;
        }

    } while (voto < 0);

    printf("Escolha inválida");
    return 0;
}