#include <stdio.h>

int main(){
    float conta, total;

    printf("Entre com o valor da conta: \n");
    scanf("%f", &conta);

    total = conta + ((10*conta)/100);

    printf("O valor total foi de: %.2f\n", total);

    return 0;
}