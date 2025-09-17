/*Fazer um programa para ler dois números inteiros e calcular e imprimir a diferença desses nú-
meros. Depois, se o segundo número for diferente de zero, fazer a divisão do primeiro pelo
segundo*/

#include <stdio.h>
int main(){
    int n1,n2,d,m;
printf("Digite o 1 numero: ");
scanf("%d", &n1);
printf("Digite o 2 numero: ");
scanf("%d", &n2);
d=n1-n2;
printf("A diferenca entre os numeros eh: %d\n", d);
m=n1/2;

if(n2!=0){
    printf("A divisao de %d por %d eh: %d", n1,n2,m);
}
    return 0;
}