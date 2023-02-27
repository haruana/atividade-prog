#include <stdio.h>

int main(){
    int num, cen, dez, uni, aux, num2;

    printf("Digite um numero de 3 digitos: \n");
    scanf("%d", &num);

    cen = num/100;
    dez = ((num - (cen*100))/10);
    uni = ((num - (cen*100))-(dez*10));

    printf("O numero digitado foi: %d\n", num);

    aux = cen;
    cen = uni;
    uni = aux;

    num2 = (cen*100) + (dez*10) + uni;

    printf("O numero ao contrario fica: %d\n", num2);

    return 0;
}