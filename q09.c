#include <stdio.h>

int main(){
    int a;

    printf("Entre com um nuemro inteiro: \n");
    scanf("%d", &a);

    printf("O seu sucessor e: %d\n", a+1);
    printf("O seu antecessor e: %d\n", a-1);

    return 0;
}