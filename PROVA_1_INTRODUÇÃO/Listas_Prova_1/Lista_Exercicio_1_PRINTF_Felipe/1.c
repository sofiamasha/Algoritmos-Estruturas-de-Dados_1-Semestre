/*Ler do teclado um número inteiro com três dígitos (no formato CDU - centena, dezena e unidade)
e mostrar o número invertido (no formato UDC). O número invertido deve ser armazenado em
outra variável antes de ser mostrado */

/*TEM Q SER DIVIDIN*/

#include <stdio.h>
int main()
{
    int c, d, u;
    printf("Digite os numeros separados por espaco:");
    scanf("%d %d %d", &c, &d, &u);
    printf("Seu numero eh %d %d %d\n", c, d, u);

    printf("Seu numero invertido eh %d %d %d\n", u, d, c);

    return 0;
}