// Crie um programa que utilize uma função para calcular a area de um retangulo
// A função deve se chamar CalcularArea e receber dois parametros(base e altura)
// A funcao deve retornar a area do retangulo
// No main, o programa deve pedir os valores ao usuario, chamar a funcao e mostrar o resultado

#include <stdio.h>

int CalcularArea(int base, int altura)
{
    return base * altura; // Multiplica base pela altura e retorna o resultado.
}

int main()
{

    int b, a; // Declara duas variáveis inteiras: 'b' (base) e 'a' (altura).

    printf("Digite a base e a altura: ");

    scanf("%d %d", &b, &a); // Lê os dois números digitados pelo usuário e armazena em 'b' e 'a'.

    int area = CalcularArea(b, a); // Chama a função CalcularArea e guarda o valor retornado na variável 'area'.

    printf("A área do retângulo é: %d\n", area);

    return 0; // Indica que o programa terminou com sucesso.
}
