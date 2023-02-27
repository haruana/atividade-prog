#include <stdio.h>

int main(){
    int dias;
    float diaria, diaria2, diaria3, diariaFinal;

    printf("Informe o numero de dias trabalhados: \n");
    scanf("%d", &dias);

    if(dias<=10){
        diaria = (dias * 50.25);
        diariaFinal = diaria - ((10*diaria)/100);
        printf("O valor a ser pago pelas diarias e de : %.2f\n", diariaFinal);
    } else if (10<dias<=20){
        diaria = (dias * 50.25);
        diaria2 = diaria + ((20*diaria)/100);
        diariaFinal = diaria2 - ((10*diaria2)/100);
        printf("O valor a ser pago pelas diarias e de : %.2f\n", diariaFinal);
    } else if (dias>20){
        diaria = (dias * 50.25);
        diaria3 = diaria + ((30*diaria)/100);
        diariaFinal = diaria3 - ((10*diaria3)/100);
        printf("O valor a ser pago pelas diarias e de : %.2f\n", diariaFinal);
    }

    return 0;
}