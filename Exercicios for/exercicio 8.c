#include <stdio.h>

int main()
{
float chico = 1.52;
float ze = 1.10;
int x;

printf("Ano |Chico | Ze\n");
for(x = 0; x<=30; x++)
{
	if(x==0)
	{
		printf("%3d | %.2f | %.2f\n", x, chico, ze);
	}
	else
	{
		chico= chico + 0.02f;
		ze = ze + 0.03f;
		printf("%3d | %.2f | %.2f\n", x, chico, ze);
	}
	
	
}
return 0;
}

