#include <stdio.h>


int soma (int *a, int *b){

int resultado = *a+*b;
return resultado;

}

int main (){
    
    int num1, num2;
    printf("Digite dois numeros inteiro: ");
    scanf("%d %d", &num1, &num2);
    int resultado = soma(&num1, &num2);
    printf("A soma de %d e %d eh: %d\n", num1, num2, resultado);
    return 0;



}