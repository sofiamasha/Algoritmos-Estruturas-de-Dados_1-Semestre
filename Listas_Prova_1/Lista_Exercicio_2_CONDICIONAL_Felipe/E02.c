/*Ler um número inteiro, verificar e escrever se ele é divisível ou não por 7.*/

#include<stdio.h>
int main(){

int n1,d;
printf("Digite um numero: ");
scanf("%d", &n1);
if(n1%7==0){
    d=n1/7;
    printf("A divisao por 7 existe e vale: %d", d);
} else {
    printf("Nao eh");
}

    return 0;
}