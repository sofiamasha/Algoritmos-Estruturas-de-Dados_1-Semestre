/* Ler o raio de um círculo e mostrar o seu perímetro e área*/
#include <stdio.h>
#include<math.h>
int main()
{
 float raio, perimetro, area;
 float pi=3.14;
 printf("Digite o raio do circulo: ");
 scanf("%f", &raio);

 perimetro= 2*pi*raio;
 area= (pow(raio,2))*pi;

 printf("Raio: %.2f\n", raio);
 printf("Perimetro: %.2f\n", perimetro);
 printf("Area: %.2f\n", area);
 return 0;
}