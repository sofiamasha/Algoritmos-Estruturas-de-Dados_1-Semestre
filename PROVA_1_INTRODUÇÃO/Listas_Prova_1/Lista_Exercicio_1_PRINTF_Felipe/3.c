/*Ler a base e a altura de um retângulo e mostrar o seu perímetro, área e diagonal*/

#include <stdio.h>
#include<math.h>
int main()
{
 float base, altura, perimetro, area, diagonal,dados;
 printf("Digite a base do retangulo: ");
 scanf("%f", &base);
 printf("Digite a altura do retangulo: ");
 scanf("%f", &altura);

 perimetro= (base*2)+(altura*2);
 area= base*altura;
 dados= pow(base, 2)+ pow(altura,2);
 diagonal=sqrt(dados);

 printf("Base: %.2f\n", base);
 printf("Altura: %.2f\n", altura);
 printf("Perimetro: %.2f\n", perimetro);
 printf("Area: %.2f\n", area);
 printf("Diagonal: %.2f\n", diagonal);
 return 0;
}
