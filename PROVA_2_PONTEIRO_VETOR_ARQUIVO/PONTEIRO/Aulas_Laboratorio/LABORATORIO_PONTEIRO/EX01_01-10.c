/*Escreva void fatorial_inplace(int *n); que substitua *n por fatorial
(*n) e retorne 0 em sucesso(-1 se *n<0)*/

/*Escreva void fatorial_inplace(int *n); que substitua *n por fatorial
(*n) e retorne 0 em sucesso(-1 se *n<0). 
Só com recursão*/

#include <stdio.h>

int fatorial_inplace(int *n) {
    if (n == NULL || *n < 0) return -1; 
    if (*n == 0 || *n == 1) {
        *n = 1;
        return 0; 
    }

    int original = *n;   
    (*n)--;              
    fatorial_inplace(n);
    *n = original * (*n); 

    return 0;
}

int main() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    if (fatorial_inplace(&n) == 0)
        printf("Fatorial: %d\n", n);
    else
        printf("Erro: número negativo\n");

    return 0;
}
