#include <stdio.h>

int main()
{	
	const int media = 6;
	float notas[10], nAcima[10], nAbaixo[10];
	int contAcima=0, contAbaixo=0;
	int i;
	
	for(i=0;i<10;i++)
	{
		printf("Digite a nota do aluno %d: ", i+1);
		scanf("%f", &notas[i]);
	}

	
	for(i=0;i<10;i++)
	{
		if(notas[i]<media)
		{
			nAbaixo[i]= notas[i];
			contAbaixo++;
		}
		else
		{
			nAcima[i]=notas[i];
			contAcima++;
		}
	}
	
	for(i=0;i<10;i++)
	{
		printf("%.2f", notas[i]);
		scanf("%f", &notas[i]);
	}
	
	return 0;
}

