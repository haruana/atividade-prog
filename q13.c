#include <stdio.h>

int main(){
    int a, b, aux;

    printf("Entre com um inteiro: ");
    scanf("%d", &a);
    printf("\nEntre com outro inteiro: ");
    scanf("%d", &b);

    printf("Valores de a e b antes da troca: \n a = %d b = %d\n", a, b);

    aux = a;
    a = b;
    b = aux;

    printf("Valores de a e b depois da troca: \n a = %d b = %d\n", a, b);
    
    return 0;
}