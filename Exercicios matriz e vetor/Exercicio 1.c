#include <stdio.h>

int main()
{
	float notas[10], media = 0;
	int i,j, abaixo = 0, acima = 0;
	
	for(i=0;i<10;i++)
	{	
		printf("Digite a nota do aluno %d: ", i+1);
		scanf("%f",&notas[i]);
		media+= notas[i];
	}
	media = media/10;
	
	for(j=0;j<10;j++)
	{	
		if(notas[j]<media)
		{
			abaixo++;
		}	
		else if(notas[j]>media)
		{
			acima++;
		}
	}
	
	printf("Media: %.2f", media);
	printf("acima da media: %d", acima);
	printf("abaixo da media: %d", abaixo);
	
	return 0;
}

