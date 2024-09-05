#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{	
	int const linha = 5, coluna =4;
	int matriz[linha][coluna]; /*starta a matriz i = linha j = coluna*/
	int i,j, maiorColuna1 = 0, ultimaColuna[coluna]; 
	
	srand(time(NULL)); 
	
	for(i=0;i<linha;i++) /*percorre a qntde de linhas*/
	{
		for(j=0;j<coluna;j++)
		{
			matriz[i][j] = rand()%50;
		}
	}
	
	printf("Matriz\n");
	for(i=0;i<linha;i++)
	{
		for(j=0;j<coluna;j++)
		{
			printf("%5d",matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatriz transposta\n");
	
	for(i=0;i<coluna;i++) /*imprime a matriz transposta*/
	{
		for(j=0;j<linha;j++)
		{
			printf("%5d",matriz[j][i]);
		}
		printf("\n");
	}
	
	for(i=0; i<linha;i++)
	{
		ultimaColuna[i] = matriz[i][coluna-1];
	}
	printf("\n todos os itens da ultima coluna\n");
	
	for(i=0; i<linha;i++)
	{
		printf("%5d",ultimaColuna[i]);
	}
	printf("\n");
	
	for(i=0;i<coluna;i++) /*Acha o maior numero da primeira coluna*/
	{
		if(maiorColuna1 < matriz[i][0])
		{
			maiorColuna1 = matriz[i][0];
		}	
	}
	
	for(i=0;i<coluna;i++)
	{
		matriz[linha-1][i] = matriz[linha-1][i] * maiorColuna1;
	}
	printf("\nMatriz resultante\n");

	for(i = 0; i < linha; i++)
	{
		for(j = 0; j < coluna; j++)
		{
			printf("%5d", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n vetor invertido\n");
	
	for(i= linha-1; i>=0; i--)
	{
		printf("%5d",ultimaColuna[i]);
	}
	printf("\n");
	
	

	return 0;
}

