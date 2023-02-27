#include <stdio.h>
#include <math.h>

int main(){
    int x;

    printf("Entre com um valor inteiro: \n");
    scanf("%d", &x);

    printf("O numero digitado foi: %d\n", x);
    printf("O seu triplo e: %d\n", (3*x));
    printf("O seu quadrado e: %d\n", x^2);
    printf("O meio e: %d\n", (x/2));
    
    return 0;
}