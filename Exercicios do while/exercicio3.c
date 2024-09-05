#include <stdio.h>

int main()
{
    int alunos = 1;
    int somaNotas = 0;
    int infTres = 0; 
    int supOito = 0;
    int maiorNota = 0;
    int menorNota = 10;

    int notas;
    float media, superior;

	printf("Digite a nota do aluno %d: \n", alunos);
    scanf("%d", &notas);
    while (notas >= 0)
    {
        somaNotas += notas;

        if (notas > maiorNota)
        {
            maiorNota = notas;
        }

        if (notas < menorNota)
        {
            menorNota = notas;
        }

        if (notas < 3)
        {
            infTres++;
        }

        if (notas > 8)
        {
            supOito++;
        }
        alunos++;
        printf("Digite a nota do aluno %d: \n", alunos);
        scanf("%d", &notas);
        
        
    } 
	alunos--;
    media = (float)somaNotas / alunos;
    superior = (float)supOito / alunos * 100;

    printf("Media da classe: %.2f\n", media);
    printf("Maior nota: %d\n", maiorNota);
    printf("Menor nota: %d\n", menorNota);
    printf("Nota inferior a 3: %d\n", infTres);
    printf("Percentual de notas superiores a 8: %.2f por cento\n", superior);
    

    return 0;
}
