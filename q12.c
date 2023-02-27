#include <stdio.h>

int main(){
    int num1, num2;

    printf("Entre com um numero: \n");
    scanf("%d", &num1);
    printf("Entre com outro numero: \n");
    scanf("%d", &num2);

    printf("A soma dos numeros digitados e: %d\n", num1+num2);
    printf("O produto dos numeros digitados e: %d\n", num1*num2);
    printf("A diferenca dos numeros digitados e: %d\n", num1-num2);
    printf("O quociente dos numeros digitados e: %d\n", num1/num2);
    printf("O resto da divisao dos numeros digitados e: %d\n", num1%num2);
    
    return 0;
}