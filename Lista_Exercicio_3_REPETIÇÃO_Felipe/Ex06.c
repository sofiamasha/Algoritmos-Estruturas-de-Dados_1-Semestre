/*Os alunos de uma turma com numAlunoS fizeram numProva provas. Leia cada uma das
numProva provas feitas por cada um dos numAlunoS alunos. Imprima na tela: a média de
cada aluno, a média da turma e o percentual dos alunos que tiveram média maior ou igual a
80%*/

#include <stdio.h>

int main()
{
    int soma=0;
    float numAlunos,numProva; mediaAlunos, mediaTurma, percentual,somaTurma;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &numAlunos);
    printf("Digite a quantidade de prova: ");
    scanf("%d", &numProva);
for(int j=0; j<=numProva; j++){
    

for(int i=0; i<=numAlunos; i++){
printf("Digite a nota do %f aluno", i+1);
    scanf("%d", &notas);
    soma+=notas;

}
mediaAlunos= soma/numProva;
printf("Média do aluno %d = %.2f\n", i + 1, mediaAluno);
somaTurma+=mediaAluno;
    if(nota>=80){
    cont++;
}
}


mediaTurma= somaTurma/numAlunos;
percentual= (cont*100)/numAlunos;



  printf("\nMédia da turma = %.2f\n", mediaTurma);
    printf("Percentual de alunos com média >= 80 = %.2f%%\n", percentual);
    return 0;
}