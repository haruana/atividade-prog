#include <stdio.h>

int main(){

       for (int i = 0; i <= 8; i++){
        if(i==8){
            printf("*\n");
            break;
        }
        printf("*");
    }
    for (int y = 1; y <= 7; y++){
        printf("*       *\n");
    }
    for (int x = 0; x <= 8; x++){
        if(x==8){
            printf("*\n\n");
            break;
        }
        printf("*");
    }



     for(int i = 0; i <=2; i++){
        if(i==0){
            printf("  *");
            continue;
        }
        if(i==2){
            printf("*\n");
            break;
        }
        printf("*");
    }

    printf(" *   *\n");

    for(int i = 0; i <= 4; i++){
        printf("*     *\n");
    }

    printf(" *   *\n");

    for(int i = 0; i <=2; i++){
        if(i==0){
            printf("  *");
            continue;
        }
        if(i==2){
            printf("*\n\n");
            break;
        }
        printf("*");
    }



    printf("  *\n");
    for(int i = 0; i<=2; i++){
        if(i==0){
            printf(" *");
            continue;
        }
        if(i==2){
            printf("*\n");
            break;
        }
        printf("*");
    }
    for(int i = 0; i<=4; i++){
        if(i==4){
            printf("*\n");
            break;
        }
        printf("*");
    }
    for(int i=0; i <=5; i++){
        printf("  *\n");
    }



    printf("*\n");
    for(int i = 0; i<=1 ;i++){
        printf("* *\n");
    }

    return 0;
}