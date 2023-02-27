#include <stdio.h>
//sb = salário Bruto
//sl = salário Líquido

int main(){
    float horaAula, inss, sb, sl, disconto;
    int horasTrab, horaTrabMes;

    printf("Informe o valor da hora aula: \n");
    scanf("%f", &horaAula);
    printf("Informe o total de horas trabalhadas por dia: \n");
    scanf("%d", &horasTrab);
    printf("Informe o percentual de disconto do INSS\n");
    scanf("%f", &inss);

    horaTrabMes = (horasTrab*30);

    printf("O total de horas trabalhadas por mes e: %d\n", horaTrabMes);

    sb = horaTrabMes*horaAula;

    disconto = ((inss*sb)/100);

    sl = sb - disconto;

    printf("\nO seu salario bruto e de: %.2f", sb);
    printf("\nO seu salario liquido e de: %.2f", sl);

    return 0;
}