#include <stdio.h>

int main(){
    int num1, num2;

    printf("Digite um numero: \n");
    scanf("%d", &num1);
    printf("Digite outro numero: \n");
    scanf("%d", &num2);

    (num1%num2 == 0)? printf("O numero %d e multiplo de %d\n", num1, num2) : printf("O numero %d nao e multiplo de %d\n", num1, num2);

}

