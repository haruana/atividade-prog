#include <stdio.h>

int main(){
    float dollar, real, conv;

    printf("Entre com a cotacao do dollar: \n");
    scanf("%f", &dollar);

    printf("Entre com a qantidade em reais do cambio: \n");
    scanf("%f", &real);

    conv = (real/dollar);

    printf("A conversao de %.2f reais para dollar e de %.2f\n", real, conv);

    return 0;
}