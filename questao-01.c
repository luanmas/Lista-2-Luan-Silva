#include <stdio.h>
#include <string.h>

int main () {
    unsigned int numWeek;
    char *week[8] = {"domingo" , "segunda" , "terça" , "quarta" , "quinta" , "sexta" , "sabado"};

    puts("Insira um número de 1 a 7 : ");
    scanf("%d" , &numWeek);

    while(numWeek != 0) {

        for (int i = 1 ; i <= (sizeof(week) / sizeof(week[0])) ; i++) { 
            if(numWeek == i){
                printf("%s\n" , week[i - 1]);
            }
        }

        puts("Insira um número de 1 a 7 : ");
        scanf("%u" , &numWeek);
    }

    printf("Escolha inválido!");
    return 0;
}