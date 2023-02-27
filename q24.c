#include <stdio.h>
#include <math.h>

int main(){
    int num1, num2, pot;

    printf("Digite um numero: \n");
    scanf("%d", &num1);
    printf("Digite outro numero: \n");
    scanf("%d", &num2);

    pot = pow(num1,num2);

    printf("A potencia do num %d elevado ao numero %d e: %d\n", num1, num2, pot);

    return 0;
}