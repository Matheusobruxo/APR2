#include <stdio.h>
#include <string.h>

int main()
{
	char p1[20];
	char p2[20];
	puts("Digite a palavra 1: ");
	gets(p1);
	int comp;

	puts("Digite a palavra 2: ");
	gets(p2);
	
	int len1 = strlen(p1);
    int len2 = strlen(p2);
    int i; 
    if(len1== len2)
    {
		for(i = 0; i<len1; i++)
		{
			if(p1[i]==p2[i])
			{
				comp=1;
			}
		}
	}
	else(comp=0);
	
	if(comp==1
	{
		printf("Sao iguais!!");
	}
	else(printf("Sao diferentes!"));
	return 0;
}

