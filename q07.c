#include <stdio.h>

int main(){
    int hora, min, seg, totalSeg;

    printf("Entre com a quantidade de horas: \n");
    scanf("%d", &hora);
    printf("Entre com a quantidade de minutos: \n");
    scanf("%d", &min);
    printf("Entre com a quantidade de segundos: \n");
    scanf("%d", &seg);

    totalSeg = (hora*3600) + (min*60) + seg;

    printf("O total de segundos e de: %d\n", totalSeg);

    return 0;
}