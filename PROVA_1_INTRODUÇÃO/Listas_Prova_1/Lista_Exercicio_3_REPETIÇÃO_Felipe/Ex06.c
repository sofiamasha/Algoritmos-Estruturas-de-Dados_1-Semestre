
/*Os alunos de uma turma com numAlunoS fizeram numProva provas. Leia cada uma das
numProva provas feitas por cada um dos numAlunoS alunos. Imprima na tela: a média de
cada aluno, a média da turma e o percentual dos alunos que tiveram média maior ou igual a
80%*/

#include <stdio.h>

int main()
{
    int cont = 0;
    int numAlunos, numProvas;
    float nota, mediaAluno, somaTurma = 0;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &numAlunos);
    printf("Digite a quantidade de provas: ");
    scanf("%d", &numProvas);

    for (int i = 0; i < numAlunos; i++)
    {
        float somaNotas = 0; // zera a cada aluno

        for (int j = 0; j < numProvas; j++)
        {
            printf("Digite a nota da prova %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &nota);
            somaNotas += nota;
        }

        mediaAluno = somaNotas / numProvas;
        printf("Média do aluno %d = %.2f\n", i + 1, mediaAluno);

        somaTurma += mediaAluno;

        if (mediaAluno >= 80)
        {
            cont++;
        }
    }

    float mediaTurma = somaTurma / numAlunos;
    float percentual = (cont * 100.0) / numAlunos;

    printf("\nMédia da turma = %.2f\n", mediaTurma);
    printf("Percentual de alunos com média >= 80 = %.2f%%\n", percentual);

    return 0;
}
