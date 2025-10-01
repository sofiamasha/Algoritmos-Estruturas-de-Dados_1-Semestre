/*screva um programa em C para somar dois números usando ponteiros.
Exemplo:
Entre com o primeiro número: 5
Entre com o segundo número: 6
A soma dos números informados: 11*/

#include <stdio.h>

int main()
{
    int n1, n2;
    int *p1 = &n1;
    int *p2 = &n2;
    printf("Digite o valor do 1 numero: ");
    scanf("%d", &n1);
    printf("Digite o valor do 2 numero: ");
    scanf("%d", &n2);
    int soma = *p1 + *p2;
    printf("O valor da soma de %d + %d eh %d", n1, n2, soma);

    return 0;
}

/*Ou com função: 

#include <stdio.h>
void soma(int *n1, int *n2){
    int somar = *n1+*n2;
    printf("A soma eh: %d\n", somar);
}
int main()
{
    int n,u;
    printf("Digite o 1 e 2 numero: ");
    scanf("%d %d", &n, &u);
  soma(&n, &u);
    

    return 0;
}*/