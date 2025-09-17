/*Fazer um método recursivo que multiplique dois números naturais, através de somas sucessivas*/

#include <stdio.h>

// Função recursiva para multiplicar a e b
int multiplicar(int a, int b) {
    if (b == 0) {
        return 0; // caso base
    } else {
        return a + multiplicar(a, b - 1); // soma a repetidamente
    }
}

int main() {
    int x, y;
    printf("Digite dois números naturais: ");
    scanf("%d %d", &x, &y);

    int resultado = multiplicar(x, y);
    printf("%d * %d = %d\n", x, y, resultado);

    return 0;
}
