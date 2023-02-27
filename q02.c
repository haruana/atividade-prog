#include <stdio.h>

int main(){
    int x;

    printf("Entre com um numero inteiro: \n");
    scanf("%d", &x);

    printf("Este numero em decimal e: %d\n", x);
    printf("Este numero em octal e: %o\n", x);
    printf("Este numero em hexadecimal e: %x\n", x);

    return 0;
}