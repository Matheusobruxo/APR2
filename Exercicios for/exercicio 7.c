#include <stdio.h>
int main()
{
int x, soma;

for(x=0; x<=100;x+=2)
{
	if(x%2 ==0)
	{
		soma = soma +x;
	}

}

printf("Soma dos numeros de 0 a 100: %d", soma);

return 0;
}
