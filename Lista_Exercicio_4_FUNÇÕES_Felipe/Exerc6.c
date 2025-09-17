/*Fazer uma função que recebe um número inteiro n e imprima os n primeiros múltiplos de 5. Além
disso, você deve fazer um procedimento exercicioXX() para chamar a função desenvolvida nesta
questão*/

#include <stdio.h>

int multiplos(int n){
    int resultado = 0;
    for(int i = 1; i <= n; i++){
        resultado = 5 * i;
        printf("%d ", resultado);
    }
    printf("\n"); // pula linha depois dos múltiplos
    return resultado; // retorna o último múltiplo
}

void exercicioXX(){
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int resultado = multiplos(n);
    printf("O último múltiplo é %d\n", resultado);
}

int main(){
    exercicioXX();
    return 0;
}
