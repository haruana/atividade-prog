#include <stdio.h>

int main(){
    int sexo;
    float peso, altura;

    printf("Entre com a sua altura em metros: \n");
    scanf("%f", &altura);

    printf("\nSelecione 1 para Feminino ou 2 para Masculino: ");
    scanf("%d", &sexo);

    switch (sexo){

        case 1: 
            peso = ((62.1 * altura) - 44.7);
            printf("\nSeu peso ideal e de: %.1f", peso);
        break;

        case 2:
            peso = ((72.7 * altura) - 58);
            printf("\nSeu peso ideal e de: %.1f", peso);
        break;
    }

    return 0;
}