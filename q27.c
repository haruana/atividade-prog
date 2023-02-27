#include <stdio.h>
#include <math.h>

int main(){
    float num1, num2, num3, mA, mG;

    printf("Entre com 3 numeros de ponto flutuante: \n");
    scanf("%f %f %f", &num1, &num2, &num3);

    mA = ((num1 + num2 + num3)/3);

    printf("A media aritimetica dos numeros %.1f %.1f e %.1f e: %.1f\n", num1, num2, num3, mA);

    mG = sqrt(num1*num2*num3);

    printf("A media geometrica de %.1f %.1f e %.1f e: %.1f\n", num1, num2, num3, mG);
    
    return 0;
}