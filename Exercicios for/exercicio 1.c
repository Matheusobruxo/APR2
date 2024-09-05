#include <stdio.h>

int main()
{
int soma = 0;
int x;
	
for (x=1;x<=333;x++)
{
	if(x%3==0){soma = soma+ x;}	
}
printf("Soma: %d", soma);
	return 0;
}
