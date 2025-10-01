/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real,
e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando
os ponteiros. Imprima os valores das variáveis antes e após a modificação.*/

#include <stdio.h>

int main()
{
    int x = 10;
    float y = 11.0;
    char z = 'L';
    int *p = &x;
    float *po = &y;
    char *pon = &z;
    printf("Valor de x antes: %d\n", *p);
    printf("Valor de y antes: %.2f\n", *po);
    printf("Valor de z antes: %c\n", *pon);
    *p = 5;
    *po = 12.5;
    *pon = 'F';
    printf("Valor de x depois: %d\n", *p);
    printf("Valor de y depois: %.2f\n", *po);
    printf("Valor de z depois: %c\n", *pon);
    return 0;
}