#include<stdio.h>

int main(){
int num;
    printf("Digite um num de 1 a 7\n");
    scanf("%d", &num);

    if(num==1){
        printf("Hoje eh domingo");
    } if (num==2){

        printf("Hoje eh segunda");
    } if(num==3){
        printf("Hoje eh terca");
    } if (num == 4){
        printf("Hoje eh quarta");
    } if (num == 5){
        printf("Hoje eh quinta");
    } if (num == 6){
        printf("Hoje eh sexta");
    } else if (num == 7){
        printf("Hoje eh sabado");
    } else{
        printf("Digite um numero valido");
    }

    return 0;
}