#include <stdio.h>

int main(){
    float f, c;

    printf("Entre com a temperatura em celcius: \n");
    scanf("%f", &c);

    f = (9*c+160)/5;

    printf("A temperatura convertida em Fahrenheit e de: %.1f\n", f);

    return 0;
}