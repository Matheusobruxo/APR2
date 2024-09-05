#include <stdio.h>
#include <conio.h>
int main()
{
	int vet[5],i,j,repetiu;
	printf("Digite numero: ");
	
	for(i=0;i<5;i++)
	{
		do
		{
			repetiu = 0;
			vet[i] = getch() - '0';
			for(j=0;j<i;j++)
				printf("%d", vet[i]);
		}while (repetiu);
		printf("%d", vet[i]);
	} 
	printf("\nVoce digitou: ");
	for (i=0;i<5;i++)
		printf("%d", vet[i]);
		
	return 0;
}

