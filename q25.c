#include <stdio.h>

int main(){
    float hora, min, seg;

    printf("Entre com a quantidade de segundos: \n");
    scanf("%f", &seg);

    hora = (seg/3600);
    printf("A %.1f horas em %.1f segundos\n", hora, seg);

    min = (seg/60);
    printf("A %.1f minutos em %.1f segundos\n", min, seg);

    printf("A %.1f segundos", seg);

    return 0;
}