#include <stdio.h>

int main(){
    float pi = 3.14159, r, d, c, a;

    printf("Informe o raio de um circulo: \n");
    scanf("%f", &r);

    printf("O valor da circunferencia e de: %.1f\n", c = (2*pi*r));
    printf("O valor do diamtero e de: %.1f\n", d = (r*pi));
    printf("O valor da area desse circulo e de: %.1f\n", a = (pi*d));

    return 0;
}