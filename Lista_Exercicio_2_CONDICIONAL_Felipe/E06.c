/* Ler um caractere e a medida do raio de um círculo.
• Se o caractere lido for T, calcular e escrever a área do triângulo inscrito.
• Se for Q, calcular e escrever a área do quadrado inscrito.
• Se for H, calcular e escrever a área do hexágono inscrito.
• Se for outro caractere que não estes, escrever uma mensagem apropriada.
. */

#include <stdio.h>
#include <math.h>

int main() {
    char figura;
    float raio, area;

    // Entrada dos dados
    printf("Digite um caractere (T, Q ou H): ");
    scanf(" %c", &figura); // espaço antes de %c para ignorar espaços em branco

    printf("Digite a medida do raio do círculo: ");
    scanf("%f", &raio);

    // Verificação do caractere e cálculo da área
    if (figura == 'T' || figura == 't') {
        // Triângulo equilátero inscrito
        float lado = raio * sqrt(3); // fórmula derivada da geometria
        area = (sqrt(3) / 4) * lado * lado;
        printf("Área do triângulo inscrito: %.2f\n", area);

    } else if (figura == 'Q' || figura == 'q') {
        // Quadrado inscrito
        float lado = raio * sqrt(2);
        area = lado * lado;
        printf("Área do quadrado inscrito: %.2f\n", area);

    } else if (figura == 'H' || figura == 'h') {
        // Hexágono regular inscrito
        float lado = raio; // em um hexágono inscrito, o lado = raio
        area = (3 * sqrt(3) / 2) * lado * lado;
        printf("Área do hexágono inscrito: %.2f\n", area);

    } else {
        printf("Caractere inválido. Use T, Q ou H.\n");
    }

    return 0;
}
