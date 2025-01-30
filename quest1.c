#include <stdio.h>

int main(void)
{
    float mediaTurma = 0, menorNota = 10, maiorNota = 0;
    int i = 0, N;
    //printf("Quantos alunos tem na turma: ");
    //scanf("%d", &N);
    float nota[40];
    printf("Quais as notas da turma na prova: \n");
    do
    {
        printf("Entre com a nota do aluno %d (-1 para parar): ", i+1);
        scanf("%f", &nota[i]);
        if(nota < 0)
            break;
        mediaTurma += nota[i];
        if (menorNota > nota[i])
            menorNota = nota[i];
        if (maiorNota < nota[i])
            maiorNota = nota[i];
        i++;
    } while (nota >= 0);
    N = i;
    mediaTurma = mediaTurma/N;
    printf("A media da turma é %.2f\n", mediaTurma);
    printf("A maior nota foi: %.2f\n", maiorNota);
    printf("A menor nota foi: %.2f\n", menorNota);
    for(i = 0; i < N; i++)
    {
        nota[i] = (nota[i]/maiorNota)*10;
        printf("Nota ponderada do aluno %d: %.2f\n", i+1, nota[i]);
    }
    return 0;