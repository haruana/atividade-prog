#include <stdio.h>
#include <math.h>

int main(){
    int x1, y1, x2, y2, auxX, auxY;
    float dist;

    printf("Entre com as coordenadas do primeiro ponto: \n");
    scanf("%d %d", &x1, &y1);

    printf("Entre com as coordenadas do segundo ponto: \n");
    scanf("%d %d", &x2, &y2);

    if(x1<x2){
        auxX = x1;
        x1 = x2;
        x2 = auxX;  
    } else{
        x1 = x1;
        x2 = x2;
    }

    if(y1<y2){
        auxY = y1;
        y1 = y2;
        y2 = auxY;  
    } else{
        y1 = y1;
        y2 = y2;
    }

    dist = sqrt(pow((x2-x1),2) - pow((y2-y1),2));

    printf("A distancia do ponto A ao ponto B e de: %.1f\n", dist);

    return 0;
}