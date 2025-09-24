
/*| Expressão | O que representa                                                    | Como imprimir corretamente | Resultado esperado                   |
| --------- | ------------------------------------------------------------------- | -------------------------- | ------------------------------------ |
| `a`       | valor inteiro                                                       | `%d`                       | 10                                   |
| `&a`      | endereço de `a`                                                     | `%p`                       | algo tipo `0x7ffee3b8c8ac`           |
| `b`       | valor do ponteiro (endereço de `a`)                                 | `%p`                       | mesmo endereço de `a`                |
| `*b`      | valor apontado por `b`                                              | `%d`                       | 10                                   |
| `&b`      | endereço da variável ponteiro `b` (onde o ponteiro está armazenado) | `%p`                       | outro endereço (diferente do de `a`) |

RESUMO:

| Caso                  | `b` (valor do ponteiro)          | Como imprimir | Comentário                     |
| --------------------- | -------------------------------- | ------------- | ------------------------------ |
| `b` não inicializado  | lixo (endereço aleatório)        | `%p`          | cuidado, valor inválido        |
| `b = &a`              | endereço de `a`                  | `%p`          | certo                          |
| `*b`                  | valor de `a`                     | `%d`          | certo                          |
| imprimir `b` com `%d` | interpretação errada do ponteiro | **não fazer** | pode mostrar lixo, não correto |

*/

#include <stdio.h>

int main()
{
    int a = 10;
    int *b = NULL;
    b = &a;
    int *c = &a;

    printf("Valor de a: %d\n", a);
    printf("Endereco de a: %p\n", &a);

    printf("Valor de b : %p\n", b);
    /*(endereço de a, pq b eh o endereco de a e *b eh o valor q b aponta, q e o valor de a ): */
    printf("Endereco de b: %p\n", &b);
    printf("Endereco de a que b aponta: %p\n", b);
    printf("Valor de apontado por b: %d\n", *b);

    printf("Valor de c(endereco de a): %p\n", c);
    printf("Endereco de c: %p\n", &c);
    printf("Endereco de a que c aponta: %p\n", c);
    printf("Valor apontado por c: %d\n", *c);
    return 0;
}