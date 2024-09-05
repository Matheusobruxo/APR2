#include <stdio.h>

int main()
{
int somaIdades = 0;
int pessoasA = 0;
int pessoasB = 0;
int idade,peso;
float altura;
int x = 1;
const int personas = 3;

while(x<=personas)
{
	printf("Digite uma idade: \n");
	scanf("%d", &idade);
	printf("Digite uma peso: \n");
	scanf("%d", &peso);
	printf("Digite uma altura: \n");
	scanf("%f", &altura);
	
	somaIdades= somaIdades + idade;
	
	if(peso>60 && altura< 1.60f)
	{
		pessoasA++;
	}
	if(idade>=10 && idade<=30 && altura> 1.70f)
	{
		pessoasB++;
	}
	x++;
}

printf("Pessoas com com mais de 60kg que medem menos que 1.60m: %d\n", pessoasA);
printf("Percentual de pessoas com idade entre 10 e 30 anos que medem mais que 1.70m: %dpor cento.", pessoasB * 100 /x);
return 0;
}

