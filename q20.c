#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &num);

    switch (num%2)
    {
    case 0:
    printf("O numero %d e par\n", num);
        break;
    
    default:
    printf("O numero %d e impar\n", num);
        break;
    }
    return 0;
}