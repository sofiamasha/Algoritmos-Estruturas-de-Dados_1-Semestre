#include<stdio.h>
//Escreve um programa em c para adicionar numeros usando chamada por referencia
//Chamada por referência significa passar o endereço (ponteiro) da variável para a função, permitindo que a função altere o valor da variável original diretamente.
   int numeros (int *x, int valor){
        *x+=valor;
        return *x;
    }

int main(){
    int soma=0, n;

    for (int i = 0; i < 5; i++) {
        printf("Digite um numero para adicionar: ");
        scanf("%d", &n);
        numeros(&soma, n);  
        printf("Soma atual: %d\n", soma);
    }

    printf("Soma final: %d\n", soma);
    
    return 0;
}




