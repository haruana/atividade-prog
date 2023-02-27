#include <stdio.h>
#include <math.h>

int main(){
    int n, res;

    printf("Entre com um numero inteiro: \n");
    scanf("%d", &n);

    res = n*n;

    printf("O resultado do numero %d ao quadrado e: %d\n", n, res);

    return 0;
}