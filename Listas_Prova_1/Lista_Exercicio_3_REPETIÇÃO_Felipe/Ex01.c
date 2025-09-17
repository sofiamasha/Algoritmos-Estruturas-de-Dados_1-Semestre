/*Fazer um programa para ler n números inteiros e imprimir a soma deles. O n valor de deve ser
lido do teclado.*/
#include <stdio.h>

int main()
{
    int n, soma=0, m;
    printf("Quantos numeros vc quer digitar? ");
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &m);
        soma+=m;
        
        
    }
    printf("A soma eh: %d", soma);

    return 0;
}