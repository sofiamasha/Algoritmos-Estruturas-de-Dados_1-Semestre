/*faça um programa para calcular o N -ésimo termo da sequência de Fibonacci (1, 1, 2, 3, 5, 8, 13,
21, ...)*/

#include <stdio.h>
int main()
{
  int n = 0, a = 1, s = 1, soma;

  do
  {

    printf("Voce quer q termo do fibonacci: ");
    scanf("%d", &n);
    if (n <= 0)
    {
      printf("Digite um numero inteiro positivo maior que zero.\n");
    }
  } while (n <= 0);

  if (n == 1 || n == 2)
  {
    printf("O fibonacci desse numero eh 1\n");
  }
  else
  {

    for (int i = 3; i <= n; i++)
    {
      soma = a + s;
      a = s;
      s = soma;
    }

    printf("O %d termo do fibonacci desse numero eh: %d", n, s);
  }
  return 0;
}