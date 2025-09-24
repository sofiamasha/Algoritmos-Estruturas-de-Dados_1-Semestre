#include <stdio.h>
// faça uma funcao com ponteiro pra achar o maior numero
int maior(int *a, int *b)
{
    int resp = (*a > *b) ? *a : *b;
    return resp;
}

int main()
{

    int x, y;
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);
    printf("O maior numero eh: %d\n", maior(&x, &y));
    return 0;
}