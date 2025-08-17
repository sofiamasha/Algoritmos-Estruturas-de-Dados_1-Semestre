/* 1) Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.*/

#include <stdio.h>
int main(){
float a1,a2,a3,a4, soma;
printf("Digite 4 numeros separados por virgula: ");
scanf("%f %f %f %f", &a1, &a2, &a3, &a4);
soma = a1+a2+a3+a4;
printf("A soma desses numeros eh : %f", soma);
    return 0;
}
