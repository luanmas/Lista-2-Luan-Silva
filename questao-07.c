int main () {
    float dividendo , divisor , res = 0.0;

    do {
        printf("Insira um número : ");
        scanf("%f" , &dividendo);

        printf("Insira outro número : ");
        scanf("%f" , &divisor);
    } while (divisor == 0);

    res = dividendo / divisor;

    printf("Resultado : %.2f\n" , res);
}