#include <stdio.h>

int main(){
    int vol, comp, alt, larg;

    printf("Entre com o comprimento: \n");
    scanf("%d", &comp);
    printf("Entre com a altura: \n");
    scanf("%d", &alt);
    printf("Entre com a largura: \n");
    scanf("%d", &larg);

    vol = (comp*alt*larg);

    printf("O volume total e de: %d\n", vol);
    return 0;
}