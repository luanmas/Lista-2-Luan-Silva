#include <stdio.h>

int main() {
    int voto = 0;
    int votosPaula = 0, votosRenata = 0, votosBrancos = 0, votosNulos = 0, totalVotos = 0;

    printf("Eleição para Presidente - Candidatos:\n");
    printf("5 - Paulo\n");
    printf("7 - Renata\n");
    printf("0 - Voto em Branco\n");
    printf("Para encerrar a votação, digite um número negativo.\n");

    while (voto >= 0) {
        printf("Digite o número do candidato (ou 0 para voto em branco, negativo para encerrar): ");
        scanf("%d", &voto);

        if (voto < 0) {
            break;
        }

        switch (voto) {
            case 5:
                votosPaula++;
                break;

            case 7:
                votosRenata++;
                break;

            case 0:
                votosBrancos++;
                break;

            default:
                votosNulos++;
        }

        totalVotos++;
    }

    printf("\nResultados da Eleição:\n");
    printf("Total de votos: %d\n", totalVotos);
    printf("Votos para Paulo (5): %d (%.2f%%)\n", votosPaula, (float)votosPaula / totalVotos * 100);
    printf("Votos para Renata (7): %d (%.2f%%)\n", votosRenata, (float)votosRenata / totalVotos * 100);
    printf("Votos em Branco (0): %d (%.2f%%)\n", votosBrancos, (float)votosBrancos / totalVotos * 100);
    printf("Votos Nulos: %d (%.2f%%)\n", votosNulos, (float)votosNulos / totalVotos * 100);

    if (votosPaula > votosRenata) {
        printf("Paulo é o candidato eleito!\n");
    } else if (votosRenata > votosPaula) {
        printf("Renata é a candidata eleita!\n");
    } else {
        printf("A eleição terminou em empate.\n");
    }

    return 0;
}
