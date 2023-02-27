#include <stdio.h>

int abs(int x){
    return ((x<0)? -x:x);
}

int main(){
    int num, a;

    printf("Entre com um numero inteiro: \n");
    scanf("%d", &num);
    a = abs(num);

    printf("O valor em modulo do numero %d e: %d\n", num, a);

    return 0;
}
