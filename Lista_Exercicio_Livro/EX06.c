/*Cada degrau de uma escada tem X de altura. Faça um programa que receba essa altura e a altura que
o usuário deseja alcançar subindo a escada, calcule e mostre quantos degraus ele deverá subir para
atingir seu objetivo, sem se preocupar com a altura do usuário. Todas as medidas fornecidas devem
estar em metros. */

#include <stdio.h>
int main(){
float altura, altdesejada, final;
printf("Qual a altura do degrau? ");
scanf("%f", &altura);
printf("Qual a altura desejada? ");
scanf("%f", &altdesejada);
final = altdesejada/altura;
printf("Vc tera q subir %.2f degraus ", final);
}