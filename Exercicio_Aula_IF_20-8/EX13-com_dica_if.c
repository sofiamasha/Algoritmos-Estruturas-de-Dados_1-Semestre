/* Um professor quer algoritimo q leia as tres notas de um aluno e calcule a media, o programa deve
exibir:
-aprovado se a media for maior ou igual a sete
-reporvado se a media for menor q 5
-recuperacao se a media tiver entre 5 e 6,9
*/

/*Use if para o primeiro teste importante.

Use else if para testar outras possibilidades.

Use else para o caso padrão ou “restante”.*/

#include <stdio.h>
int main()
{
   int n1, n2, n3, media;
   printf("Digite a primeira nota: ");
   scanf("%d", &n1);
   printf("Digite a segunda nota: \n");
   scanf("%d", &n2);
   printf("Digite a terceira nota: \n");
   scanf("%d", &n3);

   media = (n1 + n2 + n3) / 3;

   if (media >= 7)
   {
      printf("Aprovado");
   }
   else if (media >= 5)
   {
      // O else if é usado quando você quer testar outra condição se a primeira não for verdadeira.
      // Significa: “Se a média não for maior ou igual a 7, mas for maior ou igual a 5, escreva ‘Recuperação’”.
      // Ou seja, só entra aqui se a primeira condição (media >= 7) for falsa.
      printf("Recuperacao \n");
   }
   else
   {
      // O else é usado para qualquer outro caso que não tenha sido coberto pelos if e else if anteriores.
      // Significa: “Se a média não for maior ou igual a 7 e nem maior ou igual a 5, então escreva ‘Reprovado’”.
      // O else não precisa de condição, ele funciona como “tudo que sobrou”.
      printf("Reprovado");
   }
   return 0;
}
/*Como o programa decide o que imprimir?

Seu programa faz assim:

Calcula a média.

Verifica se a média é >= 7 → se sim, imprime “Aprovado” e não verifica mais nada.

Se não for >= 7, verifica se a média é >= 5 → se sim, imprime “Recuperação”.

Se nenhuma das condições acima for verdadeira → imprime “Reprovado”.

💡 O importante: o primeiro if que for verdadeiro “ganha” e os outros são ignorados.*/